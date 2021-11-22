// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "MeshPrimitiveJsonHandler.h"
#include "NamedObjectJsonHandler.h"
#include <CesiumGltf/Mesh.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/DoubleJsonHandler.h>

namespace CesiumJsonReader {
  class ExtensionReaderContext;
}

namespace CesiumGltf {
  class MeshJsonHandler : public NamedObjectJsonHandler {
  public:
    using ValueType = Mesh;

    MeshJsonHandler(const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
    void reset(IJsonHandler* pParentHandler, Mesh* pObject);

    virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  protected:
    IJsonHandler* readObjectKeyMesh(const std::string& objectType, const std::string_view& str, Mesh& o);

  private:

    Mesh* _pObject = nullptr;
    CesiumJsonReader::ArrayJsonHandler<MeshPrimitive, MeshPrimitiveJsonHandler> _primitives;
    CesiumJsonReader::ArrayJsonHandler<double, CesiumJsonReader::DoubleJsonHandler> _weights;
  };
}
