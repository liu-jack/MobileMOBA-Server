// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LSToGC.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "LSToGC.pb.h"

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

namespace LSToGC {

namespace {

const ::google::protobuf::Descriptor* LoginResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginResult_reflection_ = NULL;
const ::google::protobuf::Descriptor* ServerInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServerInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* ServerBSAddr_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServerBSAddr_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MsgID_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_LSToGC_2eproto() {
  protobuf_AddDesc_LSToGC_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "LSToGC.proto");
  GOOGLE_CHECK(file != NULL);
  LoginResult_descriptor_ = file->message_type(0);
  static const int LoginResult_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, msgid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, result_),
  };
  LoginResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginResult_descriptor_,
      LoginResult::default_instance_,
      LoginResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginResult));
  ServerInfo_descriptor_ = file->message_type(1);
  static const int ServerInfo_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerInfo, servername_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerInfo, serveraddr_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerInfo, serverport_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerInfo, serverstate_),
  };
  ServerInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ServerInfo_descriptor_,
      ServerInfo::default_instance_,
      ServerInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ServerInfo));
  ServerBSAddr_descriptor_ = file->message_type(2);
  static const int ServerBSAddr_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerBSAddr, msgid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerBSAddr, serverinfo_),
  };
  ServerBSAddr_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ServerBSAddr_descriptor_,
      ServerBSAddr::default_instance_,
      ServerBSAddr_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerBSAddr, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerBSAddr, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ServerBSAddr));
  MsgID_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_LSToGC_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginResult_descriptor_, &LoginResult::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ServerInfo_descriptor_, &ServerInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ServerBSAddr_descriptor_, &ServerBSAddr::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_LSToGC_2eproto() {
  delete LoginResult::default_instance_;
  delete LoginResult_reflection_;
  delete ServerInfo::default_instance_;
  delete ServerInfo_reflection_;
  delete ServerBSAddr::default_instance_;
  delete ServerBSAddr_reflection_;
}

void protobuf_AddDesc_LSToGC_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014LSToGC.proto\022\006LSToGC\"]\n\013LoginResult\022>\n"
    "\005msgid\030\001 \001(\0162\r.LSToGC.MsgID: eMsgToGCFro"
    "mLS_NotifyLoginResult\022\016\n\006result\030\002 \001(\005\"]\n"
    "\nServerInfo\022\022\n\nServerName\030\001 \001(\t\022\022\n\nServe"
    "rAddr\030\002 \001(\t\022\022\n\nServerPort\030\003 \001(\005\022\023\n\013Serve"
    "rState\030\004 \001(\005\"w\n\014ServerBSAddr\022\?\n\005msgid\030\001 "
    "\001(\0162\r.LSToGC.MsgID:!eMsgToGCFromLS_Notif"
    "yServerBSAddr\022&\n\nserverinfo\030\002 \003(\0132\022.LSTo"
    "GC.ServerInfo*V\n\005MsgID\022%\n eMsgToGCFromLS"
    "_NotifyLoginResult\020\200\004\022&\n!eMsgToGCFromLS_"
    "NotifyServerBSAddr\020\201\004", 421);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "LSToGC.proto", &protobuf_RegisterTypes);
  LoginResult::default_instance_ = new LoginResult();
  ServerInfo::default_instance_ = new ServerInfo();
  ServerBSAddr::default_instance_ = new ServerBSAddr();
  LoginResult::default_instance_->InitAsDefaultInstance();
  ServerInfo::default_instance_->InitAsDefaultInstance();
  ServerBSAddr::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_LSToGC_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_LSToGC_2eproto {
  StaticDescriptorInitializer_LSToGC_2eproto() {
    protobuf_AddDesc_LSToGC_2eproto();
  }
} static_descriptor_initializer_LSToGC_2eproto_;
const ::google::protobuf::EnumDescriptor* MsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgID_descriptor_;
}
bool MsgID_IsValid(int value) {
  switch(value) {
    case 512:
    case 513:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int LoginResult::kMsgidFieldNumber;
const int LoginResult::kResultFieldNumber;
#endif  // !_MSC_VER

LoginResult::LoginResult()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LSToGC.LoginResult)
}

void LoginResult::InitAsDefaultInstance() {
}

LoginResult::LoginResult(const LoginResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LSToGC.LoginResult)
}

void LoginResult::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 512;
  result_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginResult::~LoginResult() {
  // @@protoc_insertion_point(destructor:LSToGC.LoginResult)
  SharedDtor();
}

void LoginResult::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LoginResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginResult_descriptor_;
}

const LoginResult& LoginResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LSToGC_2eproto();
  return *default_instance_;
}

LoginResult* LoginResult::default_instance_ = NULL;

LoginResult* LoginResult::New() const {
  return new LoginResult;
}

void LoginResult::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    msgid_ = 512;
    result_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LSToGC.LoginResult)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyLoginResult];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::LSToGC::MsgID_IsValid(value)) {
            set_msgid(static_cast< ::LSToGC::MsgID >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_result;
        break;
      }

      // optional int32 result = 2;
      case 2: {
        if (tag == 16) {
         parse_result:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
          set_has_result();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LSToGC.LoginResult)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LSToGC.LoginResult)
  return false;
#undef DO_
}

void LoginResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LSToGC.LoginResult)
  // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyLoginResult];
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // optional int32 result = 2;
  if (has_result()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->result(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LSToGC.LoginResult)
}

::google::protobuf::uint8* LoginResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSToGC.LoginResult)
  // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyLoginResult];
  if (has_msgid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->msgid(), target);
  }

  // optional int32 result = 2;
  if (has_result()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->result(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSToGC.LoginResult)
  return target;
}

int LoginResult::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyLoginResult];
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

    // optional int32 result = 2;
    if (has_result()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->result());
    }

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

void LoginResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginResult::MergeFrom(const LoginResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
    if (from.has_result()) {
      set_result(from.result());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginResult::CopyFrom(const LoginResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginResult::IsInitialized() const {

  return true;
}

void LoginResult::Swap(LoginResult* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    std::swap(result_, other->result_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginResult_descriptor_;
  metadata.reflection = LoginResult_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ServerInfo::kServerNameFieldNumber;
const int ServerInfo::kServerAddrFieldNumber;
const int ServerInfo::kServerPortFieldNumber;
const int ServerInfo::kServerStateFieldNumber;
#endif  // !_MSC_VER

ServerInfo::ServerInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LSToGC.ServerInfo)
}

void ServerInfo::InitAsDefaultInstance() {
}

ServerInfo::ServerInfo(const ServerInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LSToGC.ServerInfo)
}

void ServerInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  servername_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serveraddr_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  serverport_ = 0;
  serverstate_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServerInfo::~ServerInfo() {
  // @@protoc_insertion_point(destructor:LSToGC.ServerInfo)
  SharedDtor();
}

void ServerInfo::SharedDtor() {
  if (servername_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete servername_;
  }
  if (serveraddr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete serveraddr_;
  }
  if (this != default_instance_) {
  }
}

void ServerInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerInfo_descriptor_;
}

const ServerInfo& ServerInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LSToGC_2eproto();
  return *default_instance_;
}

ServerInfo* ServerInfo::default_instance_ = NULL;

ServerInfo* ServerInfo::New() const {
  return new ServerInfo;
}

void ServerInfo::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ServerInfo*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 15) {
    ZR_(serverport_, serverstate_);
    if (has_servername()) {
      if (servername_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        servername_->clear();
      }
    }
    if (has_serveraddr()) {
      if (serveraddr_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        serveraddr_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ServerInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LSToGC.ServerInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string ServerName = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_servername()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->servername().data(), this->servername().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "servername");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ServerAddr;
        break;
      }

      // optional string ServerAddr = 2;
      case 2: {
        if (tag == 18) {
         parse_ServerAddr:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_serveraddr()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->serveraddr().data(), this->serveraddr().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "serveraddr");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_ServerPort;
        break;
      }

      // optional int32 ServerPort = 3;
      case 3: {
        if (tag == 24) {
         parse_ServerPort:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &serverport_)));
          set_has_serverport();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_ServerState;
        break;
      }

      // optional int32 ServerState = 4;
      case 4: {
        if (tag == 32) {
         parse_ServerState:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &serverstate_)));
          set_has_serverstate();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LSToGC.ServerInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LSToGC.ServerInfo)
  return false;
#undef DO_
}

void ServerInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LSToGC.ServerInfo)
  // optional string ServerName = 1;
  if (has_servername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->servername().data(), this->servername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "servername");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->servername(), output);
  }

  // optional string ServerAddr = 2;
  if (has_serveraddr()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->serveraddr().data(), this->serveraddr().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "serveraddr");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->serveraddr(), output);
  }

  // optional int32 ServerPort = 3;
  if (has_serverport()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->serverport(), output);
  }

  // optional int32 ServerState = 4;
  if (has_serverstate()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->serverstate(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LSToGC.ServerInfo)
}

::google::protobuf::uint8* ServerInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSToGC.ServerInfo)
  // optional string ServerName = 1;
  if (has_servername()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->servername().data(), this->servername().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "servername");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->servername(), target);
  }

  // optional string ServerAddr = 2;
  if (has_serveraddr()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->serveraddr().data(), this->serveraddr().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "serveraddr");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->serveraddr(), target);
  }

  // optional int32 ServerPort = 3;
  if (has_serverport()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->serverport(), target);
  }

  // optional int32 ServerState = 4;
  if (has_serverstate()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->serverstate(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSToGC.ServerInfo)
  return target;
}

int ServerInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string ServerName = 1;
    if (has_servername()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->servername());
    }

    // optional string ServerAddr = 2;
    if (has_serveraddr()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->serveraddr());
    }

    // optional int32 ServerPort = 3;
    if (has_serverport()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->serverport());
    }

    // optional int32 ServerState = 4;
    if (has_serverstate()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->serverstate());
    }

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

void ServerInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ServerInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ServerInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ServerInfo::MergeFrom(const ServerInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_servername()) {
      set_servername(from.servername());
    }
    if (from.has_serveraddr()) {
      set_serveraddr(from.serveraddr());
    }
    if (from.has_serverport()) {
      set_serverport(from.serverport());
    }
    if (from.has_serverstate()) {
      set_serverstate(from.serverstate());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ServerInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerInfo::CopyFrom(const ServerInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerInfo::IsInitialized() const {

  return true;
}

void ServerInfo::Swap(ServerInfo* other) {
  if (other != this) {
    std::swap(servername_, other->servername_);
    std::swap(serveraddr_, other->serveraddr_);
    std::swap(serverport_, other->serverport_);
    std::swap(serverstate_, other->serverstate_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ServerInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServerInfo_descriptor_;
  metadata.reflection = ServerInfo_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ServerBSAddr::kMsgidFieldNumber;
const int ServerBSAddr::kServerinfoFieldNumber;
#endif  // !_MSC_VER

ServerBSAddr::ServerBSAddr()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:LSToGC.ServerBSAddr)
}

void ServerBSAddr::InitAsDefaultInstance() {
}

ServerBSAddr::ServerBSAddr(const ServerBSAddr& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:LSToGC.ServerBSAddr)
}

void ServerBSAddr::SharedCtor() {
  _cached_size_ = 0;
  msgid_ = 513;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServerBSAddr::~ServerBSAddr() {
  // @@protoc_insertion_point(destructor:LSToGC.ServerBSAddr)
  SharedDtor();
}

void ServerBSAddr::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ServerBSAddr::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerBSAddr::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerBSAddr_descriptor_;
}

const ServerBSAddr& ServerBSAddr::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_LSToGC_2eproto();
  return *default_instance_;
}

ServerBSAddr* ServerBSAddr::default_instance_ = NULL;

ServerBSAddr* ServerBSAddr::New() const {
  return new ServerBSAddr;
}

void ServerBSAddr::Clear() {
  msgid_ = 513;
  serverinfo_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ServerBSAddr::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LSToGC.ServerBSAddr)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyServerBSAddr];
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::LSToGC::MsgID_IsValid(value)) {
            set_msgid(static_cast< ::LSToGC::MsgID >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_serverinfo;
        break;
      }

      // repeated .LSToGC.ServerInfo serverinfo = 2;
      case 2: {
        if (tag == 18) {
         parse_serverinfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_serverinfo()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_serverinfo;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:LSToGC.ServerBSAddr)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LSToGC.ServerBSAddr)
  return false;
#undef DO_
}

void ServerBSAddr::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LSToGC.ServerBSAddr)
  // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyServerBSAddr];
  if (has_msgid()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->msgid(), output);
  }

  // repeated .LSToGC.ServerInfo serverinfo = 2;
  for (int i = 0; i < this->serverinfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->serverinfo(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:LSToGC.ServerBSAddr)
}

::google::protobuf::uint8* ServerBSAddr::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:LSToGC.ServerBSAddr)
  // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyServerBSAddr];
  if (has_msgid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->msgid(), target);
  }

  // repeated .LSToGC.ServerInfo serverinfo = 2;
  for (int i = 0; i < this->serverinfo_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->serverinfo(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:LSToGC.ServerBSAddr)
  return target;
}

int ServerBSAddr::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .LSToGC.MsgID msgid = 1 [default = eMsgToGCFromLS_NotifyServerBSAddr];
    if (has_msgid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->msgid());
    }

  }
  // repeated .LSToGC.ServerInfo serverinfo = 2;
  total_size += 1 * this->serverinfo_size();
  for (int i = 0; i < this->serverinfo_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->serverinfo(i));
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

void ServerBSAddr::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ServerBSAddr* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ServerBSAddr*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ServerBSAddr::MergeFrom(const ServerBSAddr& from) {
  GOOGLE_CHECK_NE(&from, this);
  serverinfo_.MergeFrom(from.serverinfo_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgid()) {
      set_msgid(from.msgid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ServerBSAddr::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerBSAddr::CopyFrom(const ServerBSAddr& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerBSAddr::IsInitialized() const {

  return true;
}

void ServerBSAddr::Swap(ServerBSAddr* other) {
  if (other != this) {
    std::swap(msgid_, other->msgid_);
    serverinfo_.Swap(&other->serverinfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ServerBSAddr::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServerBSAddr_descriptor_;
  metadata.reflection = ServerBSAddr_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace LSToGC

// @@protoc_insertion_point(global_scope)
