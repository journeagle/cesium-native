// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/AccessorSparseIndices.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/IntegerJsonHandler.h>

namespace CesiumJsonReader {
  class ExtensionReaderContext;
}

namespace CesiumGltf {
  class AccessorSparseIndicesJsonHandler : public CesiumJsonReader::ExtensibleObjectJsonHandler {
  public:
    using ValueType = AccessorSparseIndices;

    AccessorSparseIndicesJsonHandler(const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
    void reset(IJsonHandler* pParentHandler, AccessorSparseIndices* pObject);

    virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  protected:
    IJsonHandler* readObjectKeyAccessorSparseIndices(const std::string& objectType, const std::string_view& str, AccessorSparseIndices& o);

  private:

    AccessorSparseIndices* _pObject = nullptr;
    CesiumJsonReader::IntegerJsonHandler<int32_t> _bufferView;
    CesiumJsonReader::IntegerJsonHandler<int64_t> _byteOffset;
    CesiumJsonReader::IntegerJsonHandler<int32_t> _componentType;
  };
}
