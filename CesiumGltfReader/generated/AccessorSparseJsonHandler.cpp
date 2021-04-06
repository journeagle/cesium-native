// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#include "AccessorSparseJsonHandler.h"
#include "CesiumGltf/AccessorSparse.h"

#include <cassert>
#include <string>

using namespace CesiumGltf;

AccessorSparseJsonHandler::AccessorSparseJsonHandler(
    const ReadModelOptions& options) noexcept
    : ExtensibleObjectJsonHandler(options),
      _count(options),
      _indices(options),
      _values(options) {}

void AccessorSparseJsonHandler::reset(
    IJsonHandler* pParent,
    AccessorSparse* pObject) {
  ExtensibleObjectJsonHandler::reset(pParent, pObject);
  this->_pObject = pObject;
}

AccessorSparse* AccessorSparseJsonHandler::getObject() {
  return this->_pObject;
}

void AccessorSparseJsonHandler::reportWarning(
    const std::string& warning,
    std::vector<std::string>&& context) {
  if (this->getCurrentKey()) {
    context.emplace_back(std::string(".") + this->getCurrentKey());
  }
  this->parent()->reportWarning(warning, std::move(context));
}

IJsonHandler* AccessorSparseJsonHandler::readObjectKey(
    const char* str,
    size_t /*length*/,
    bool /*copy*/) {
  assert(this->_pObject);
  return this->AccessorSparseKey(
      AccessorSparse::TypeName,
      str,
      *this->_pObject);
}

IJsonHandler* AccessorSparseJsonHandler::AccessorSparseKey(
    const std::string& objectType,
    const char* str,
    AccessorSparse& o) {
  using namespace std::string_literals;

  if ("count"s == str)
    return property("count", this->_count, o.count);
  if ("indices"s == str)
    return property("indices", this->_indices, o.indices);
  if ("values"s == str)
    return property("values", this->_values, o.values);

  return this->ExtensibleObjectKey(objectType, str, *this->_pObject);
}
