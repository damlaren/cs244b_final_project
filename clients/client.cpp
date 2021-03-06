#include "client.h"
#include "env.h"
#include <assert.h>
#include <cstdio>
#include <iostream>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char* copyStr(const char* src)
{
  int len = strlen(src);
  char *buf = new char[len + 1];
  std::copy(src, src + len, buf);
  buf[len] = '\0';
  return buf;
}

void executeCommand(const std::string& cmdStr)
{
  std::cout << "executing: " << cmdStr << std::endl;
  system(cmdStr.c_str());
}

PacketDropConfig::PacketDropConfig(const std::string& s, float f)
{
  dropping = false;
  srcAddr = s;
  frac = f;
}

PacketDropConfig::~PacketDropConfig()
{
  stopDropping();
}

void PacketDropConfig::startDropping()
{
  if (!dropping)
  {
    std::string cmd =
      std::string("./scripts/startPacketDrop.sh ") +
      srcAddr +
      std::string(" ") +
      std::to_string(frac);
    system(cmd.c_str());
    dropping = true;
  }
}

void PacketDropConfig::stopDropping()
{
  if (dropping)
  {
    std::string cmd =
      std::string("./scripts/stopPacketDrop.sh ") +
      srcAddr +
      std::string(" ") +
      std::to_string(frac);
    system(cmd.c_str());
    dropping = false;
  }
}

int RaftClusterConfig::firstNodeId() const
{
  return 1;
}

int RaftClusterConfig::lastNodeId() const
{
  assert(numNodes >= 1);
  return numNodes;
}

int RaftClusterConfig::getRandomNodeId() const
{
  return (rand() % numNodes) + 1;
}

pid_t RaftClusterConfig::createProcess(const char* path, char* const args[])
{
  pid_t pid = fork();
  
  if (pid == 0)
  {
    // Child process executes command.
    int status = execv(path, args);
    if (status == -1)
    {
      std::cout << "createProcess failed: " << path << std::endl;
      exit(1);
    }
  }

  return pid;
}

bool RaftClusterConfig::stopProcess(pid_t pid)
{
  if (kill(pid, SIGKILL) == -1)
  {
    perror("stopProcess failed");
    return false;
  }
  return true;
}

RaftClient::RaftClient(int id) :
  clientId(id)
{
  assert(id >= 1);
}

void RaftClient::runTestOperations(int nIterations, int nClients)
{
  int i = 0;
  alive = true;
  while (alive)
  {
    std::string testfile = std::string("/testfile") + std::to_string(clientId + i * nClients);
    std::string value = std::to_string(nIterations);

    if (!writeFile(testfile, value))
    {
      std::cerr << "Write failed: " << testfile << std::endl;
    }
    else
    {
      std::cout << "Write succeeded! " << testfile << std::endl;
    }

    if (readFile(testfile) != value)
    {
      std::cerr << "Read failed: " << testfile << std::endl;
    }
    else
    {
      std::cout << "Read succeeded! " << testfile << std::endl;
    }
    i++;
  }
}

void* runClient(void *arg)
{
  ClientOperations *opsInfo = static_cast<ClientOperations*>(arg);
  assert(opsInfo);

  opsInfo->client->runTestOperations(opsInfo->nIterations, opsInfo->nClients);
  delete opsInfo;

  pthread_exit(nullptr);
}
