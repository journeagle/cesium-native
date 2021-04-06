#include "JsonObjectJsonHandler.h"

using namespace CesiumGltf;

namespace {
template <typename T> void addOrReplace(JsonValue& json, T value) {
  JsonValue::Array* pArray = std::get_if<JsonValue::Array>(&json.value);
  if (pArray) {
    pArray->emplace_back(value);
  } else {
    json = value;
  }
}
} // namespace

JsonObjectJsonHandler::JsonObjectJsonHandler(
    const ReadModelOptions& options) noexcept
    : JsonHandler(options) {}

void JsonObjectJsonHandler::reset(IJsonHandler* pParent, JsonValue* pValue) {
  JsonHandler::reset(pParent);
  this->_stack.clear();
  this->_stack.push_back(pValue);
}

IJsonHandler* JsonObjectJsonHandler::readNull() {
  addOrReplace(*this->_stack.back(), JsonValue::Null());
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readBool(bool b) {
  addOrReplace(*this->_stack.back(), b);
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readInt32(int i) {
  addOrReplace(*this->_stack.back(), JsonValue::Number(i));
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readUint32(unsigned i) {
  addOrReplace(*this->_stack.back(), JsonValue::Number(i));
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readInt64(int64_t i) {
  addOrReplace(*this->_stack.back(), JsonValue::Number(i));
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readUint64(uint64_t i) {
  addOrReplace(*this->_stack.back(), JsonValue::Number(i));
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readDouble(double d) {
  addOrReplace(*this->_stack.back(), d);
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readString(
    const char* str,
    size_t /* length */,
    bool /* copy */) {
  *this->_stack.back() = str;
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readObjectStart() {
  JsonValue& current = *this->_stack.back();
  JsonValue::Array* pArray = std::get_if<JsonValue::Array>(&current.value);
  if (pArray) {
    JsonValue& newArray = pArray->emplace_back(JsonValue::Object());
    this->_stack.emplace_back(&newArray);
  } else {
    current = JsonValue::Object();
  }

  return this;
}

IJsonHandler* JsonObjectJsonHandler::readObjectKey(
    const char* str,
    size_t /* length */,
    bool /* copy */) {
  JsonValue& json = *this->_stack.back();
  JsonValue::Object* pObject = std::get_if<JsonValue::Object>(&json.value);

  auto it = pObject->emplace(str, JsonValue()).first;
  this->_stack.push_back(&it->second);
  this->_currentKey = str;
  return this;
}

IJsonHandler* JsonObjectJsonHandler::readObjectEnd(size_t /* memberCount */) {
  return this->doneElement();
}

IJsonHandler* JsonObjectJsonHandler::readArrayStart() {
  JsonValue& current = *this->_stack.back();
  JsonValue::Array* pArray = std::get_if<JsonValue::Array>(&current.value);
  if (pArray) {
    JsonValue& newArray = pArray->emplace_back(JsonValue::Array());
    this->_stack.emplace_back(&newArray);
  } else {
    current = JsonValue::Array();
  }

  return this;
}

IJsonHandler* JsonObjectJsonHandler::readArrayEnd(size_t /* elementCount */) {
  this->_stack.pop_back();
  return this->_stack.empty() ? this->parent() : this;
}

IJsonHandler* JsonObjectJsonHandler::doneElement() {
  JsonValue& current = *this->_stack.back();
  JsonValue::Array* pArray = std::get_if<JsonValue::Array>(&current.value);
  if (!pArray) {
    this->_stack.pop_back();
    return this->_stack.empty() ? this->parent() : this;
  } else {
    return this;
  }
}