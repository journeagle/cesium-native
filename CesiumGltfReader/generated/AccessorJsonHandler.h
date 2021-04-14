// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "AccessorSparseJsonHandler.h"
#include "CesiumGltf/Accessor.h"
#include "CesiumGltf/ReaderContext.h"
#include "CesiumJsonReader/ArrayJsonHandler.h"
#include "CesiumJsonReader/BoolJsonHandler.h"
#include "CesiumJsonReader/DoubleJsonHandler.h"
#include "CesiumJsonReader/IntegerJsonHandler.h"
#include "NamedObjectJsonHandler.h"

namespace CesiumGltf {
struct ReaderContext;
struct Accessor;

class AccessorJsonHandler : public NamedObjectJsonHandler {
public:
  using ValueType = Accessor;

  AccessorJsonHandler(const ReaderContext& context) noexcept;
  void reset(IJsonHandler* pParentHandler, Accessor* pObject);

  virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

protected:
  IJsonHandler* readObjectKeyAccessor(
      const std::string& objectType,
      const std::string_view& str,
      Accessor& o);

private:
  class TypeJsonHandler : public CesiumJsonReader::JsonHandler {
  public:
    TypeJsonHandler() noexcept : CesiumJsonReader::JsonHandler() {}
    void reset(CesiumJsonReader::IJsonHandler* pParent, Accessor::Type* pEnum);
    virtual CesiumJsonReader::IJsonHandler*
    readString(const std::string_view& str) override;

  private:
    Accessor::Type* _pEnum = nullptr;
  };

  Accessor* _pObject = nullptr;
  CesiumJsonReader::IntegerJsonHandler<int32_t> _bufferView;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _byteOffset;
  CesiumJsonReader::IntegerJsonHandler<Accessor::ComponentType> _componentType;
  CesiumJsonReader::BoolJsonHandler _normalized;
  CesiumJsonReader::IntegerJsonHandler<int64_t> _count;
  TypeJsonHandler _type;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _max;
  CesiumJsonReader::
      ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler>
          _min;
  AccessorSparseJsonHandler _sparse;
};
} // namespace CesiumGltf
