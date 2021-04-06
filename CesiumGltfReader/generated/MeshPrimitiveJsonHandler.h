// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "ArrayJsonHandler.h"
#include "CesiumGltf/MeshPrimitive.h"
#include "DictionaryJsonHandler.h"
#include "ExtensibleObjectJsonHandler.h"
#include "IntegerJsonHandler.h"
#include <CesiumGltf/Reader.h>

namespace CesiumGltf {
struct MeshPrimitive;

class MeshPrimitiveJsonHandler : public ExtensibleObjectJsonHandler {
public:
  MeshPrimitiveJsonHandler(const ReadModelOptions& options) noexcept;
  void reset(IJsonHandler* pHandler, MeshPrimitive* pObject);
  MeshPrimitive* getObject();
  virtual void reportWarning(
      const std::string& warning,
      std::vector<std::string>&& context = std::vector<std::string>()) override;

  virtual IJsonHandler*
  readObjectKey(const char* str, size_t length, bool copy) override;

protected:
  IJsonHandler* MeshPrimitiveKey(
      const std::string& objectType,
      const char* str,
      MeshPrimitive& o);

private:
  MeshPrimitive* _pObject = nullptr;
  DictionaryJsonHandler<int32_t, IntegerJsonHandler<int32_t>> _attributes;
  IntegerJsonHandler<int32_t> _indices;
  IntegerJsonHandler<int32_t> _material;
  IntegerJsonHandler<MeshPrimitive::Mode> _mode;
  ArrayJsonHandler<
      std::unordered_map<std::string, int32_t>,
      DictionaryJsonHandler<int32_t, IntegerJsonHandler<int32_t>>>
      _targets;
};
} // namespace CesiumGltf
