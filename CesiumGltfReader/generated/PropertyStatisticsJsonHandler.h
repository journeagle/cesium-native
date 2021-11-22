// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/PropertyStatistics.h>
#include <CesiumJsonReader/DictionaryJsonHandler.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>
#include <CesiumJsonReader/JsonObjectJsonHandler.h>

namespace CesiumJsonReader {
  class ExtensionReaderContext;
}

namespace CesiumGltf {
  class PropertyStatisticsJsonHandler : public CesiumJsonReader::ExtensibleObjectJsonHandler {
  public:
    using ValueType = PropertyStatistics;

    PropertyStatisticsJsonHandler(const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
    void reset(IJsonHandler* pParentHandler, PropertyStatistics* pObject);

    virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  protected:
    IJsonHandler* readObjectKeyPropertyStatistics(const std::string& objectType, const std::string_view& str, PropertyStatistics& o);

  private:

    PropertyStatistics* _pObject = nullptr;
    CesiumJsonReader::JsonObjectJsonHandler _min;
    CesiumJsonReader::JsonObjectJsonHandler _max;
    CesiumJsonReader::JsonObjectJsonHandler _mean;
    CesiumJsonReader::JsonObjectJsonHandler _median;
    CesiumJsonReader::JsonObjectJsonHandler _standardDeviation;
    CesiumJsonReader::JsonObjectJsonHandler _variance;
    CesiumJsonReader::JsonObjectJsonHandler _sum;
    CesiumJsonReader::DictionaryJsonHandler<CesiumUtility::JsonValue, CesiumJsonReader::JsonObjectJsonHandler> _occurrences;
  };
}
