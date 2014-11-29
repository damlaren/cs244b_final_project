// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: build/Core/ProtoBufTest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "build/Core/ProtoBufTest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace LogCabin {
namespace ProtoBuf {

namespace {

const ::google::protobuf::Descriptor* TestMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  TestMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_build_2fCore_2fProtoBufTest_2eproto() {
  protobuf_AddDesc_build_2fCore_2fProtoBufTest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "build/Core/ProtoBufTest.proto");
  GOOGLE_CHECK(file != NULL);
  TestMessage_descriptor_ = file->message_type(0);
  static const int TestMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_a_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_b_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_c_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, field_d_),
  };
  TestMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      TestMessage_descriptor_,
      TestMessage::default_instance_,
      TestMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(TestMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(TestMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_build_2fCore_2fProtoBufTest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    TestMessage_descriptor_, &TestMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_build_2fCore_2fProtoBufTest_2eproto() {
  delete TestMessage::default_instance_;
  delete TestMessage_reflection_;
}

void protobuf_AddDesc_build_2fCore_2fProtoBufTest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035build/Core/ProtoBufTest.proto\022\021LogCabi"
    "n.ProtoBuf\"Q\n\013TestMessage\022\017\n\007field_a\030\001 \002"
    "(\004\022\017\n\007field_b\030\002 \002(\004\022\017\n\007field_c\030\003 \003(\004\022\017\n\007"
    "field_d\030\004 \001(\014", 133);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "build/Core/ProtoBufTest.proto", &protobuf_RegisterTypes);
  TestMessage::default_instance_ = new TestMessage();
  TestMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_build_2fCore_2fProtoBufTest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_build_2fCore_2fProtoBufTest_2eproto {
  StaticDescriptorInitializer_build_2fCore_2fProtoBufTest_2eproto() {
    protobuf_AddDesc_build_2fCore_2fProtoBufTest_2eproto();
  }
} static_descriptor_initializer_build_2fCore_2fProtoBufTest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int TestMessage::kFieldAFieldNumber;
const int TestMessage::kFieldBFieldNumber;
const int TestMessage::kFieldCFieldNumber;
const int TestMessage::kFieldDFieldNumber;
#endif  // !_MSC_VER

TestMessage::TestMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void TestMessage::InitAsDefaultInstance() {
}

TestMessage::TestMessage(const TestMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void TestMessage::SharedCtor() {
  _cached_size_ = 0;
  field_a_ = GOOGLE_ULONGLONG(0);
  field_b_ = GOOGLE_ULONGLONG(0);
  field_d_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

TestMessage::~TestMessage() {
  SharedDtor();
}

void TestMessage::SharedDtor() {
  if (field_d_ != &::google::protobuf::internal::kEmptyString) {
    delete field_d_;
  }
  if (this != default_instance_) {
  }
}

void TestMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* TestMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TestMessage_descriptor_;
}

const TestMessage& TestMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_build_2fCore_2fProtoBufTest_2eproto();
  return *default_instance_;
}

TestMessage* TestMessage::default_instance_ = NULL;

TestMessage* TestMessage::New() const {
  return new TestMessage;
}

void TestMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    field_a_ = GOOGLE_ULONGLONG(0);
    field_b_ = GOOGLE_ULONGLONG(0);
    if (has_field_d()) {
      if (field_d_ != &::google::protobuf::internal::kEmptyString) {
        field_d_->clear();
      }
    }
  }
  field_c_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool TestMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 field_a = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &field_a_)));
          set_has_field_a();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_field_b;
        break;
      }

      // required uint64 field_b = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_field_b:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &field_b_)));
          set_has_field_b();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_field_c;
        break;
      }

      // repeated uint64 field_c = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_field_c:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 1, 24, input, this->mutable_field_c())));
        } else if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag)
                   == ::google::protobuf::internal::WireFormatLite::
                      WIRETYPE_LENGTH_DELIMITED) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, this->mutable_field_c())));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_field_c;
        if (input->ExpectTag(34)) goto parse_field_d;
        break;
      }

      // optional bytes field_d = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_field_d:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_field_d()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void TestMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 field_a = 1;
  if (has_field_a()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->field_a(), output);
  }

  // required uint64 field_b = 2;
  if (has_field_b()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->field_b(), output);
  }

  // repeated uint64 field_c = 3;
  for (int i = 0; i < this->field_c_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(
      3, this->field_c(i), output);
  }

  // optional bytes field_d = 4;
  if (has_field_d()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->field_d(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* TestMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint64 field_a = 1;
  if (has_field_a()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->field_a(), target);
  }

  // required uint64 field_b = 2;
  if (has_field_b()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->field_b(), target);
  }

  // repeated uint64 field_c = 3;
  for (int i = 0; i < this->field_c_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt64ToArray(3, this->field_c(i), target);
  }

  // optional bytes field_d = 4;
  if (has_field_d()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->field_d(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int TestMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 field_a = 1;
    if (has_field_a()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->field_a());
    }

    // required uint64 field_b = 2;
    if (has_field_b()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->field_b());
    }

    // optional bytes field_d = 4;
    if (has_field_d()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->field_d());
    }

  }
  // repeated uint64 field_c = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->field_c_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt64Size(this->field_c(i));
    }
    total_size += 1 * this->field_c_size() + data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void TestMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const TestMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const TestMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void TestMessage::MergeFrom(const TestMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  field_c_.MergeFrom(from.field_c_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_field_a()) {
      set_field_a(from.field_a());
    }
    if (from.has_field_b()) {
      set_field_b(from.field_b());
    }
    if (from.has_field_d()) {
      set_field_d(from.field_d());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void TestMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TestMessage::CopyFrom(const TestMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TestMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void TestMessage::Swap(TestMessage* other) {
  if (other != this) {
    std::swap(field_a_, other->field_a_);
    std::swap(field_b_, other->field_b_);
    field_c_.Swap(&other->field_c_);
    std::swap(field_d_, other->field_d_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata TestMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = TestMessage_descriptor_;
  metadata.reflection = TestMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoBuf
}  // namespace LogCabin

// @@protoc_insertion_point(global_scope)