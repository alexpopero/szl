// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: emitvalues/sawzall.proto

#ifndef PROTOBUF_emitvalues_2fsawzall_2eproto__INCLUDED
#define PROTOBUF_emitvalues_2fsawzall_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace sawzall {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_emitvalues_2fsawzall_2eproto();
void protobuf_AssignDesc_emitvalues_2fsawzall_2eproto();
void protobuf_ShutdownFile_emitvalues_2fsawzall_2eproto();

class SzlFieldProto;
class SzlTypeProto;

enum SzlTypeProto_KIND {
  SzlTypeProto_KIND_VOID = 0,
  SzlTypeProto_KIND_BOOL = 1,
  SzlTypeProto_KIND_BYTES = 2,
  SzlTypeProto_KIND_FINGERPRINT = 3,
  SzlTypeProto_KIND_FLOAT = 4,
  SzlTypeProto_KIND_INT = 5,
  SzlTypeProto_KIND_STRING = 6,
  SzlTypeProto_KIND_TIME = 7,
  SzlTypeProto_KIND_TUPLE = 8,
  SzlTypeProto_KIND_ARRAY = 9,
  SzlTypeProto_KIND_MAP = 10,
  SzlTypeProto_KIND_TABLE = 11,
  SzlTypeProto_KIND_FUNCTION = 12,
  SzlTypeProto_KIND_NKIND = 13
};
bool SzlTypeProto_KIND_IsValid(int value);
const SzlTypeProto_KIND SzlTypeProto_KIND_KIND_MIN = SzlTypeProto_KIND_VOID;
const SzlTypeProto_KIND SzlTypeProto_KIND_KIND_MAX = SzlTypeProto_KIND_NKIND;
const int SzlTypeProto_KIND_KIND_ARRAYSIZE = SzlTypeProto_KIND_KIND_MAX + 1;

const ::google::protobuf::EnumDescriptor* SzlTypeProto_KIND_descriptor();
inline const ::std::string& SzlTypeProto_KIND_Name(SzlTypeProto_KIND value) {
  return ::google::protobuf::internal::NameOfEnum(
    SzlTypeProto_KIND_descriptor(), value);
}
inline bool SzlTypeProto_KIND_Parse(
    const ::std::string& name, SzlTypeProto_KIND* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SzlTypeProto_KIND>(
    SzlTypeProto_KIND_descriptor(), name, value);
}
// ===================================================================

class SzlFieldProto : public ::google::protobuf::Message {
 public:
  SzlFieldProto();
  virtual ~SzlFieldProto();
  
  SzlFieldProto(const SzlFieldProto& from);
  
  inline SzlFieldProto& operator=(const SzlFieldProto& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SzlFieldProto& default_instance();
  
  void Swap(SzlFieldProto* other);
  
  // implements Message ----------------------------------------------
  
  SzlFieldProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SzlFieldProto& from);
  void MergeFrom(const SzlFieldProto& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string Label = 1;
  inline bool has_label() const;
  inline void clear_label();
  static const int kLabelFieldNumber = 1;
  inline const ::std::string& label() const;
  inline void set_label(const ::std::string& value);
  inline void set_label(const char* value);
  inline void set_label(const char* value, size_t size);
  inline ::std::string* mutable_label();
  
  // required string Type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline const ::std::string& type() const;
  inline void set_type(const ::std::string& value);
  inline void set_type(const char* value);
  inline void set_type(const char* value, size_t size);
  inline ::std::string* mutable_type();
  
  // optional int32 Tag = 3;
  inline bool has_tag() const;
  inline void clear_tag();
  static const int kTagFieldNumber = 3;
  inline ::google::protobuf::int32 tag() const;
  inline void set_tag(::google::protobuf::int32 value);
  
  // @@protoc_insertion_point(class_scope:sawzall.SzlFieldProto)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* label_;
  static const ::std::string _default_label_;
  ::std::string* type_;
  static const ::std::string _default_type_;
  ::google::protobuf::int32 tag_;
  friend void  protobuf_AddDesc_emitvalues_2fsawzall_2eproto();
  friend void protobuf_AssignDesc_emitvalues_2fsawzall_2eproto();
  friend void protobuf_ShutdownFile_emitvalues_2fsawzall_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static SzlFieldProto* default_instance_;
};
// -------------------------------------------------------------------

class SzlTypeProto : public ::google::protobuf::Message {
 public:
  SzlTypeProto();
  virtual ~SzlTypeProto();
  
  SzlTypeProto(const SzlTypeProto& from);
  
  inline SzlTypeProto& operator=(const SzlTypeProto& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const SzlTypeProto& default_instance();
  
  void Swap(SzlTypeProto* other);
  
  // implements Message ----------------------------------------------
  
  SzlTypeProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SzlTypeProto& from);
  void MergeFrom(const SzlTypeProto& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  typedef SzlTypeProto_KIND KIND;
  static const KIND VOID = SzlTypeProto_KIND_VOID;
  static const KIND BOOL = SzlTypeProto_KIND_BOOL;
  static const KIND BYTES = SzlTypeProto_KIND_BYTES;
  static const KIND FINGERPRINT = SzlTypeProto_KIND_FINGERPRINT;
  static const KIND FLOAT = SzlTypeProto_KIND_FLOAT;
  static const KIND INT = SzlTypeProto_KIND_INT;
  static const KIND STRING = SzlTypeProto_KIND_STRING;
  static const KIND TIME = SzlTypeProto_KIND_TIME;
  static const KIND TUPLE = SzlTypeProto_KIND_TUPLE;
  static const KIND ARRAY = SzlTypeProto_KIND_ARRAY;
  static const KIND MAP = SzlTypeProto_KIND_MAP;
  static const KIND TABLE = SzlTypeProto_KIND_TABLE;
  static const KIND FUNCTION = SzlTypeProto_KIND_FUNCTION;
  static const KIND NKIND = SzlTypeProto_KIND_NKIND;
  static inline bool KIND_IsValid(int value) {
    return SzlTypeProto_KIND_IsValid(value);
  }
  static const KIND KIND_MIN =
    SzlTypeProto_KIND_KIND_MIN;
  static const KIND KIND_MAX =
    SzlTypeProto_KIND_KIND_MAX;
  static const int KIND_ARRAYSIZE =
    SzlTypeProto_KIND_KIND_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  KIND_descriptor() {
    return SzlTypeProto_KIND_descriptor();
  }
  static inline const ::std::string& KIND_Name(KIND value) {
    return SzlTypeProto_KIND_Name(value);
  }
  static inline bool KIND_Parse(const ::std::string& name,
      KIND* value) {
    return SzlTypeProto_KIND_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required int32 Kind = 1;
  inline bool has_kind() const;
  inline void clear_kind();
  static const int kKindFieldNumber = 1;
  inline ::google::protobuf::int32 kind() const;
  inline void set_kind(::google::protobuf::int32 value);
  
  // optional string Table = 2;
  inline bool has_table() const;
  inline void clear_table();
  static const int kTableFieldNumber = 2;
  inline const ::std::string& table() const;
  inline void set_table(const ::std::string& value);
  inline void set_table(const char* value);
  inline void set_table(const char* value, size_t size);
  inline ::std::string* mutable_table();
  
  // optional int32 Param = 3;
  inline bool has_param() const;
  inline void clear_param();
  static const int kParamFieldNumber = 3;
  inline ::google::protobuf::int32 param() const;
  inline void set_param(::google::protobuf::int32 value);
  
  // repeated .sawzall.SzlFieldProto Indices = 4;
  inline int indices_size() const;
  inline void clear_indices();
  static const int kIndicesFieldNumber = 4;
  inline const ::sawzall::SzlFieldProto& indices(int index) const;
  inline ::sawzall::SzlFieldProto* mutable_indices(int index);
  inline ::sawzall::SzlFieldProto* add_indices();
  inline const ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >&
      indices() const;
  inline ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >*
      mutable_indices();
  
  // repeated .sawzall.SzlFieldProto Fields = 5;
  inline int fields_size() const;
  inline void clear_fields();
  static const int kFieldsFieldNumber = 5;
  inline const ::sawzall::SzlFieldProto& fields(int index) const;
  inline ::sawzall::SzlFieldProto* mutable_fields(int index);
  inline ::sawzall::SzlFieldProto* add_fields();
  inline const ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >&
      fields() const;
  inline ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >*
      mutable_fields();
  
  // optional .sawzall.SzlFieldProto Element = 6;
  inline bool has_element() const;
  inline void clear_element();
  static const int kElementFieldNumber = 6;
  inline const ::sawzall::SzlFieldProto& element() const;
  inline ::sawzall::SzlFieldProto* mutable_element();
  
  // optional .sawzall.SzlFieldProto Weight = 7;
  inline bool has_weight() const;
  inline void clear_weight();
  static const int kWeightFieldNumber = 7;
  inline const ::sawzall::SzlFieldProto& weight() const;
  inline ::sawzall::SzlFieldProto* mutable_weight();
  
  // @@protoc_insertion_point(class_scope:sawzall.SzlTypeProto)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 kind_;
  ::std::string* table_;
  static const ::std::string _default_table_;
  ::google::protobuf::int32 param_;
  ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto > indices_;
  ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto > fields_;
  ::sawzall::SzlFieldProto* element_;
  ::sawzall::SzlFieldProto* weight_;
  friend void  protobuf_AddDesc_emitvalues_2fsawzall_2eproto();
  friend void protobuf_AssignDesc_emitvalues_2fsawzall_2eproto();
  friend void protobuf_ShutdownFile_emitvalues_2fsawzall_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static SzlTypeProto* default_instance_;
};
// ===================================================================


// ===================================================================

// SzlFieldProto

// required string Label = 1;
inline bool SzlFieldProto::has_label() const {
  return _has_bit(0);
}
inline void SzlFieldProto::clear_label() {
  if (label_ != &_default_label_) {
    label_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& SzlFieldProto::label() const {
  return *label_;
}
inline void SzlFieldProto::set_label(const ::std::string& value) {
  _set_bit(0);
  if (label_ == &_default_label_) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void SzlFieldProto::set_label(const char* value) {
  _set_bit(0);
  if (label_ == &_default_label_) {
    label_ = new ::std::string;
  }
  label_->assign(value);
}
inline void SzlFieldProto::set_label(const char* value, size_t size) {
  _set_bit(0);
  if (label_ == &_default_label_) {
    label_ = new ::std::string;
  }
  label_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SzlFieldProto::mutable_label() {
  _set_bit(0);
  if (label_ == &_default_label_) {
    label_ = new ::std::string;
  }
  return label_;
}

// required string Type = 2;
inline bool SzlFieldProto::has_type() const {
  return _has_bit(1);
}
inline void SzlFieldProto::clear_type() {
  if (type_ != &_default_type_) {
    type_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& SzlFieldProto::type() const {
  return *type_;
}
inline void SzlFieldProto::set_type(const ::std::string& value) {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void SzlFieldProto::set_type(const char* value) {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(value);
}
inline void SzlFieldProto::set_type(const char* value, size_t size) {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SzlFieldProto::mutable_type() {
  _set_bit(1);
  if (type_ == &_default_type_) {
    type_ = new ::std::string;
  }
  return type_;
}

// optional int32 Tag = 3;
inline bool SzlFieldProto::has_tag() const {
  return _has_bit(2);
}
inline void SzlFieldProto::clear_tag() {
  tag_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 SzlFieldProto::tag() const {
  return tag_;
}
inline void SzlFieldProto::set_tag(::google::protobuf::int32 value) {
  _set_bit(2);
  tag_ = value;
}

// -------------------------------------------------------------------

// SzlTypeProto

// required int32 Kind = 1;
inline bool SzlTypeProto::has_kind() const {
  return _has_bit(0);
}
inline void SzlTypeProto::clear_kind() {
  kind_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 SzlTypeProto::kind() const {
  return kind_;
}
inline void SzlTypeProto::set_kind(::google::protobuf::int32 value) {
  _set_bit(0);
  kind_ = value;
}

// optional string Table = 2;
inline bool SzlTypeProto::has_table() const {
  return _has_bit(1);
}
inline void SzlTypeProto::clear_table() {
  if (table_ != &_default_table_) {
    table_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& SzlTypeProto::table() const {
  return *table_;
}
inline void SzlTypeProto::set_table(const ::std::string& value) {
  _set_bit(1);
  if (table_ == &_default_table_) {
    table_ = new ::std::string;
  }
  table_->assign(value);
}
inline void SzlTypeProto::set_table(const char* value) {
  _set_bit(1);
  if (table_ == &_default_table_) {
    table_ = new ::std::string;
  }
  table_->assign(value);
}
inline void SzlTypeProto::set_table(const char* value, size_t size) {
  _set_bit(1);
  if (table_ == &_default_table_) {
    table_ = new ::std::string;
  }
  table_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* SzlTypeProto::mutable_table() {
  _set_bit(1);
  if (table_ == &_default_table_) {
    table_ = new ::std::string;
  }
  return table_;
}

// optional int32 Param = 3;
inline bool SzlTypeProto::has_param() const {
  return _has_bit(2);
}
inline void SzlTypeProto::clear_param() {
  param_ = 0;
  _clear_bit(2);
}
inline ::google::protobuf::int32 SzlTypeProto::param() const {
  return param_;
}
inline void SzlTypeProto::set_param(::google::protobuf::int32 value) {
  _set_bit(2);
  param_ = value;
}

// repeated .sawzall.SzlFieldProto Indices = 4;
inline int SzlTypeProto::indices_size() const {
  return indices_.size();
}
inline void SzlTypeProto::clear_indices() {
  indices_.Clear();
}
inline const ::sawzall::SzlFieldProto& SzlTypeProto::indices(int index) const {
  return indices_.Get(index);
}
inline ::sawzall::SzlFieldProto* SzlTypeProto::mutable_indices(int index) {
  return indices_.Mutable(index);
}
inline ::sawzall::SzlFieldProto* SzlTypeProto::add_indices() {
  return indices_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >&
SzlTypeProto::indices() const {
  return indices_;
}
inline ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >*
SzlTypeProto::mutable_indices() {
  return &indices_;
}

// repeated .sawzall.SzlFieldProto Fields = 5;
inline int SzlTypeProto::fields_size() const {
  return fields_.size();
}
inline void SzlTypeProto::clear_fields() {
  fields_.Clear();
}
inline const ::sawzall::SzlFieldProto& SzlTypeProto::fields(int index) const {
  return fields_.Get(index);
}
inline ::sawzall::SzlFieldProto* SzlTypeProto::mutable_fields(int index) {
  return fields_.Mutable(index);
}
inline ::sawzall::SzlFieldProto* SzlTypeProto::add_fields() {
  return fields_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >&
SzlTypeProto::fields() const {
  return fields_;
}
inline ::google::protobuf::RepeatedPtrField< ::sawzall::SzlFieldProto >*
SzlTypeProto::mutable_fields() {
  return &fields_;
}

// optional .sawzall.SzlFieldProto Element = 6;
inline bool SzlTypeProto::has_element() const {
  return _has_bit(5);
}
inline void SzlTypeProto::clear_element() {
  if (element_ != NULL) element_->::sawzall::SzlFieldProto::Clear();
  _clear_bit(5);
}
inline const ::sawzall::SzlFieldProto& SzlTypeProto::element() const {
  return element_ != NULL ? *element_ : *default_instance_->element_;
}
inline ::sawzall::SzlFieldProto* SzlTypeProto::mutable_element() {
  _set_bit(5);
  if (element_ == NULL) element_ = new ::sawzall::SzlFieldProto;
  return element_;
}

// optional .sawzall.SzlFieldProto Weight = 7;
inline bool SzlTypeProto::has_weight() const {
  return _has_bit(6);
}
inline void SzlTypeProto::clear_weight() {
  if (weight_ != NULL) weight_->::sawzall::SzlFieldProto::Clear();
  _clear_bit(6);
}
inline const ::sawzall::SzlFieldProto& SzlTypeProto::weight() const {
  return weight_ != NULL ? *weight_ : *default_instance_->weight_;
}
inline ::sawzall::SzlFieldProto* SzlTypeProto::mutable_weight() {
  _set_bit(6);
  if (weight_ == NULL) weight_ = new ::sawzall::SzlFieldProto;
  return weight_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sawzall

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::sawzall::SzlTypeProto_KIND>() {
  return ::sawzall::SzlTypeProto_KIND_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_emitvalues_2fsawzall_2eproto__INCLUDED
