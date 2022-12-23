// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AgentConfig.proto

#include "AgentConfig.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace hybrid {
PROTOBUF_CONSTEXPR AgentConfig::AgentConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.node_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.delimiter_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.log_level_)*/0
  , /*decltype(_impl_.is_protobuf_)*/false} {}
struct AgentConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AgentConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AgentConfigDefaultTypeInternal() {}
  union {
    AgentConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AgentConfigDefaultTypeInternal _AgentConfig_default_instance_;
}  // namespace hybrid
static ::_pb::Metadata file_level_metadata_AgentConfig_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_AgentConfig_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_AgentConfig_2eproto = nullptr;

const uint32_t TableStruct_AgentConfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::hybrid::AgentConfig, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::hybrid::AgentConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::hybrid::AgentConfig, _impl_.node_),
  PROTOBUF_FIELD_OFFSET(::hybrid::AgentConfig, _impl_.log_level_),
  PROTOBUF_FIELD_OFFSET(::hybrid::AgentConfig, _impl_.is_protobuf_),
  PROTOBUF_FIELD_OFFSET(::hybrid::AgentConfig, _impl_.delimiter_),
  ~0u,
  1,
  2,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, -1, sizeof(::hybrid::AgentConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::hybrid::_AgentConfig_default_instance_._instance,
};

const char descriptor_table_protodef_AgentConfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021AgentConfig.proto\022\006hybrid\"\221\001\n\013AgentCon"
  "fig\022\014\n\004node\030\001 \001(\t\022\026\n\tlog_level\030\002 \001(\005H\000\210\001"
  "\001\022\030\n\013is_protobuf\030\003 \001(\010H\001\210\001\001\022\026\n\tdelimiter"
  "\030\004 \001(\014H\002\210\001\001B\014\n\n_log_levelB\016\n\014_is_protobu"
  "fB\014\n\n_delimiterb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_AgentConfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_AgentConfig_2eproto = {
    false, false, 183, descriptor_table_protodef_AgentConfig_2eproto,
    "AgentConfig.proto",
    &descriptor_table_AgentConfig_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_AgentConfig_2eproto::offsets,
    file_level_metadata_AgentConfig_2eproto, file_level_enum_descriptors_AgentConfig_2eproto,
    file_level_service_descriptors_AgentConfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_AgentConfig_2eproto_getter() {
  return &descriptor_table_AgentConfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_AgentConfig_2eproto(&descriptor_table_AgentConfig_2eproto);
namespace hybrid {

// ===================================================================

class AgentConfig::_Internal {
 public:
  using HasBits = decltype(std::declval<AgentConfig>()._impl_._has_bits_);
  static void set_has_log_level(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_is_protobuf(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_delimiter(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

AgentConfig::AgentConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:hybrid.AgentConfig)
}
AgentConfig::AgentConfig(const AgentConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  AgentConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.node_){}
    , decltype(_impl_.delimiter_){}
    , decltype(_impl_.log_level_){}
    , decltype(_impl_.is_protobuf_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.node_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.node_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_node().empty()) {
    _this->_impl_.node_.Set(from._internal_node(), 
      _this->GetArenaForAllocation());
  }
  _impl_.delimiter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.delimiter_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_delimiter()) {
    _this->_impl_.delimiter_.Set(from._internal_delimiter(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.log_level_, &from._impl_.log_level_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.is_protobuf_) -
    reinterpret_cast<char*>(&_impl_.log_level_)) + sizeof(_impl_.is_protobuf_));
  // @@protoc_insertion_point(copy_constructor:hybrid.AgentConfig)
}

inline void AgentConfig::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.node_){}
    , decltype(_impl_.delimiter_){}
    , decltype(_impl_.log_level_){0}
    , decltype(_impl_.is_protobuf_){false}
  };
  _impl_.node_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.node_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.delimiter_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.delimiter_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AgentConfig::~AgentConfig() {
  // @@protoc_insertion_point(destructor:hybrid.AgentConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AgentConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.node_.Destroy();
  _impl_.delimiter_.Destroy();
}

void AgentConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void AgentConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:hybrid.AgentConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.node_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.delimiter_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&_impl_.log_level_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.is_protobuf_) -
        reinterpret_cast<char*>(&_impl_.log_level_)) + sizeof(_impl_.is_protobuf_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AgentConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string node = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_node();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "hybrid.AgentConfig.node"));
        } else
          goto handle_unusual;
        continue;
      // optional int32 log_level = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_log_level(&has_bits);
          _impl_.log_level_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool is_protobuf = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_is_protobuf(&has_bits);
          _impl_.is_protobuf_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes delimiter = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_delimiter();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* AgentConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hybrid.AgentConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string node = 1;
  if (!this->_internal_node().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_node().data(), static_cast<int>(this->_internal_node().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "hybrid.AgentConfig.node");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_node(), target);
  }

  // optional int32 log_level = 2;
  if (_internal_has_log_level()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_log_level(), target);
  }

  // optional bool is_protobuf = 3;
  if (_internal_has_is_protobuf()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_is_protobuf(), target);
  }

  // optional bytes delimiter = 4;
  if (_internal_has_delimiter()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_delimiter(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hybrid.AgentConfig)
  return target;
}

size_t AgentConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hybrid.AgentConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string node = 1;
  if (!this->_internal_node().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_node());
  }

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional bytes delimiter = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_delimiter());
    }

    // optional int32 log_level = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_log_level());
    }

    // optional bool is_protobuf = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData AgentConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    AgentConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*AgentConfig::GetClassData() const { return &_class_data_; }


void AgentConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<AgentConfig*>(&to_msg);
  auto& from = static_cast<const AgentConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hybrid.AgentConfig)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_node().empty()) {
    _this->_internal_set_node(from._internal_node());
  }
  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_delimiter(from._internal_delimiter());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.log_level_ = from._impl_.log_level_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.is_protobuf_ = from._impl_.is_protobuf_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void AgentConfig::CopyFrom(const AgentConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hybrid.AgentConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AgentConfig::IsInitialized() const {
  return true;
}

void AgentConfig::InternalSwap(AgentConfig* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.node_, lhs_arena,
      &other->_impl_.node_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.delimiter_, lhs_arena,
      &other->_impl_.delimiter_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(AgentConfig, _impl_.is_protobuf_)
      + sizeof(AgentConfig::_impl_.is_protobuf_)
      - PROTOBUF_FIELD_OFFSET(AgentConfig, _impl_.log_level_)>(
          reinterpret_cast<char*>(&_impl_.log_level_),
          reinterpret_cast<char*>(&other->_impl_.log_level_));
}

::PROTOBUF_NAMESPACE_ID::Metadata AgentConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_AgentConfig_2eproto_getter, &descriptor_table_AgentConfig_2eproto_once,
      file_level_metadata_AgentConfig_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace hybrid
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::hybrid::AgentConfig*
Arena::CreateMaybeMessage< ::hybrid::AgentConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::hybrid::AgentConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
