// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "AccessorSparseValuesJsonHandler.h"
#include "CesiumGltf/AccessorSparseValues.h"

#include <cassert>
#include <string>

using namespace CesiumGltf;

AccessorSparseValuesJsonHandler::AccessorSparseValuesJsonHandler(
    const ReadModelOptions& options) noexcept
    : ExtensibleObjectJsonHandler(options),
      _bufferView(options),
      _byteOffset(options) {}

void AccessorSparseValuesJsonHandler::reset(
    IJsonHandler* pParent,
    AccessorSparseValues* pObject) {
  ExtensibleObjectJsonHandler::reset(pParent, pObject);
  this->_pObject = pObject;
}

AccessorSparseValues* AccessorSparseValuesJsonHandler::getObject() {
  return this->_pObject;
}

void AccessorSparseValuesJsonHandler::reportWarning(
    const std::string& warning,
    std::vector<std::string>&& context) {
  if (this->getCurrentKey()) {
    context.emplace_back(std::string(".") + this->getCurrentKey());
  }
  this->parent()->reportWarning(warning, std::move(context));
}

IJsonHandler* AccessorSparseValuesJsonHandler::readObjectKey(
    const char* str,
    size_t /*length*/,
    bool /*copy*/) {
  assert(this->_pObject);
  return this->AccessorSparseValuesKey(
      AccessorSparseValues::TypeName,
      str,
      *this->_pObject);
}

IJsonHandler* AccessorSparseValuesJsonHandler::AccessorSparseValuesKey(
    const std::string& objectType,
    const char* str,
    AccessorSparseValues& o) {
  using namespace std::string_literals;

  if ("bufferView"s == str)
    return property("bufferView", this->_bufferView, o.bufferView);
  if ("byteOffset"s == str)
    return property("byteOffset", this->_byteOffset, o.byteOffset);

  return this->ExtensibleObjectKey(objectType, str, *this->_pObject);
}
