// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "EnumValueJsonHandler.h"
#include <CesiumGltf/Enum.h>
#include <CesiumJsonReader/ArrayJsonHandler.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/StringJsonHandler.h>

namespace CesiumJsonReader {
  class ExtensionReaderContext;
}

namespace CesiumGltf {
  class EnumJsonHandler : public CesiumJsonReader::ExtensibleObjectJsonHandler {
  public:
    using ValueType = Enum;

    EnumJsonHandler(const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
    void reset(IJsonHandler* pParentHandler, Enum* pObject);

    virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  protected:
    IJsonHandler* readObjectKeyEnum(const std::string& objectType, const std::string_view& str, Enum& o);

  private:

    Enum* _pObject = nullptr;
    CesiumJsonReader::StringJsonHandler _name;
    CesiumJsonReader::StringJsonHandler _description;
    CesiumJsonReader::StringJsonHandler _valueType;
    CesiumJsonReader::ArrayJsonHandler<EnumValue, EnumValueJsonHandler> _values;
  };
}
