// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!

#include "TilesetJsonWriter.h"

#include <Cesium3DTiles/Asset.h>
#include <Cesium3DTiles/Availability.h>
#include <Cesium3DTiles/BoundingVolume.h>
#include <Cesium3DTiles/Buffer.h>
#include <Cesium3DTiles/BufferView.h>
#include <Cesium3DTiles/Class.h>
#include <Cesium3DTiles/ClassProperty.h>
#include <Cesium3DTiles/ClassStatistics.h>
#include <Cesium3DTiles/Content.h>
#include <Cesium3DTiles/Enum.h>
#include <Cesium3DTiles/EnumValue.h>
#include <Cesium3DTiles/Extension3dTilesBoundingVolumeS2.h>
#include <Cesium3DTiles/Extension3dTilesEllipsoid.h>
#include <Cesium3DTiles/ExtensionContent3dTilesContentVoxels.h>
#include <Cesium3DTiles/GroupMetadata.h>
#include <Cesium3DTiles/ImplicitTiling.h>
#include <Cesium3DTiles/MetadataEntity.h>
#include <Cesium3DTiles/Padding.h>
#include <Cesium3DTiles/Properties.h>
#include <Cesium3DTiles/PropertyStatistics.h>
#include <Cesium3DTiles/PropertyTable.h>
#include <Cesium3DTiles/PropertyTableProperty.h>
#include <Cesium3DTiles/Schema.h>
#include <Cesium3DTiles/Statistics.h>
#include <Cesium3DTiles/Subtree.h>
#include <Cesium3DTiles/Subtrees.h>
#include <Cesium3DTiles/Tile.h>
#include <Cesium3DTiles/Tileset.h>
#include <CesiumJsonWriter/ExtensionWriterContext.h>
#include <CesiumJsonWriter/JsonObjectWriter.h>
#include <CesiumJsonWriter/JsonWriter.h>
#include <CesiumUtility/IntrusivePointer.h>
#include <CesiumUtility/JsonValue.h>

// NOLINTNEXTLINE(misc-include-cleaner)
#include <CesiumJsonWriter/writeJsonExtensions.h>

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

namespace Cesium3DTilesWriter {

namespace {

void writeJson(
    const Cesium3DTiles::Extension3dTilesBoundingVolumeS2& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Extension3dTilesEllipsoid& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::ExtensionContent3dTilesContentVoxels& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Padding& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Statistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::ClassStatistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::PropertyStatistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Schema& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Enum& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::EnumValue& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Class& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::ClassProperty& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Subtree& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::MetadataEntity& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Availability& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::PropertyTable& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::PropertyTableProperty& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::BufferView& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Buffer& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Tileset& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Tile& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::ImplicitTiling& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Subtrees& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Content& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::BoundingVolume& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::GroupMetadata& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Properties& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

void writeJson(
    const Cesium3DTiles::Asset& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

// Forward declaration to avoid circular dependency since some properties
// are vector of unordered_map and others are unordered_map of vector
template <typename T>
[[maybe_unused]] void writeJson(
    const std::vector<T>& list,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context);

template <typename T>
[[maybe_unused]] void writeJson(
    const CesiumUtility::IntrusivePointer<T>& ptr,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(*ptr, jsonWriter, context);
}

[[maybe_unused]] void writeJson(
    const std::string& str,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& /* context */) {
  jsonWriter.String(str);
}

[[maybe_unused]] void writeJson(
    double val,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& /* context */) {
  jsonWriter.Double(val);
}

[[maybe_unused]] void writeJson(
    bool val,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& /* context */) {
  jsonWriter.Bool(val);
}

[[maybe_unused]] void writeJson(
    int64_t val,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& /* context */) {
  jsonWriter.Int64(val);
}

[[maybe_unused]] void writeJson(
    int32_t val,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& /* context */) {
  jsonWriter.Int64(val);
}

[[maybe_unused]] void writeJson(
    const CesiumUtility::JsonValue::Object& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& /* context */) {
  jsonWriter.StartObject();
  for (const auto& item : obj) {
    jsonWriter.Key(item.first);
    CesiumJsonWriter::writeJsonValue(item.second, jsonWriter);
  }
  jsonWriter.EndObject();
}

[[maybe_unused]] void writeJson(
    const CesiumUtility::JsonValue& value,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& /* context */) {
  CesiumJsonWriter::writeJsonValue(value, jsonWriter);
}

template <typename T>
[[maybe_unused]] void writeJson(
    const std::unordered_map<std::string, T>& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();
  for (const auto& item : obj) {
    jsonWriter.Key(item.first);
    writeJson(item.second, jsonWriter, context);
  }
  jsonWriter.EndObject();
}

template <typename T>
[[maybe_unused]] void writeJson(
    const std::vector<T>& list,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartArray();
  for (const T& item : list) {
    writeJson(item, jsonWriter, context);
  }
  jsonWriter.EndArray();
}

template <typename T>
[[maybe_unused]] void writeJson(
    const std::optional<T>& val,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  if (val) {
    writeJson(*val, jsonWriter, context);
  } else {
    jsonWriter.Null();
  }
}

template <typename T>
void writeExtensibleObject(
    const T& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {

  if (hasRegisteredExtensions(obj, jsonWriter, context)) {
    jsonWriter.Key("extensions");
    writeJsonExtensions(obj, jsonWriter, context);
  }

  if (!obj.extras.empty()) {
    jsonWriter.Key("extras");
    writeJson(obj.extras, jsonWriter, context);
  }
}

template <typename T>
void writeSharedAsset(
    const T& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeExtensibleObject(obj, jsonWriter, context);
}

template <typename T>
void writeNamedObject(
    const T& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {

  if (!obj.name.empty()) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);
}

template <typename T>
void writeMetadataEntity(
    const T& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {

  jsonWriter.Key("class");
  writeJson(obj.classProperty, jsonWriter, context);

  if (!obj.properties.empty()) {
    jsonWriter.Key("properties");
    writeJson(obj.properties, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);
}

void writeJson(
    const Cesium3DTiles::Extension3dTilesBoundingVolumeS2& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("token");
  writeJson(obj.token, jsonWriter, context);

  jsonWriter.Key("minimumHeight");
  writeJson(obj.minimumHeight, jsonWriter, context);

  jsonWriter.Key("maximumHeight");
  writeJson(obj.maximumHeight, jsonWriter, context);

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Extension3dTilesEllipsoid& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.body) {
    jsonWriter.Key("body");
    writeJson(obj.body, jsonWriter, context);
  }

  if (!obj.radii.empty()) {
    jsonWriter.Key("radii");
    writeJson(obj.radii, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::ExtensionContent3dTilesContentVoxels& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (!obj.dimensions.empty()) {
    jsonWriter.Key("dimensions");
    writeJson(obj.dimensions, jsonWriter, context);
  }

  if (obj.padding) {
    jsonWriter.Key("padding");
    writeJson(obj.padding, jsonWriter, context);
  }

  jsonWriter.Key("class");
  writeJson(obj.classProperty, jsonWriter, context);

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Padding& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (!obj.before.empty()) {
    jsonWriter.Key("before");
    writeJson(obj.before, jsonWriter, context);
  }

  if (!obj.after.empty()) {
    jsonWriter.Key("after");
    writeJson(obj.after, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Statistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (!obj.classes.empty()) {
    jsonWriter.Key("classes");
    writeJson(obj.classes, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::ClassStatistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.count) {
    jsonWriter.Key("count");
    writeJson(obj.count, jsonWriter, context);
  }

  if (!obj.properties.empty()) {
    jsonWriter.Key("properties");
    writeJson(obj.properties, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::PropertyStatistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.min) {
    jsonWriter.Key("min");
    writeJson(obj.min, jsonWriter, context);
  }

  if (obj.max) {
    jsonWriter.Key("max");
    writeJson(obj.max, jsonWriter, context);
  }

  if (obj.mean) {
    jsonWriter.Key("mean");
    writeJson(obj.mean, jsonWriter, context);
  }

  if (obj.median) {
    jsonWriter.Key("median");
    writeJson(obj.median, jsonWriter, context);
  }

  if (obj.standardDeviation) {
    jsonWriter.Key("standardDeviation");
    writeJson(obj.standardDeviation, jsonWriter, context);
  }

  if (obj.variance) {
    jsonWriter.Key("variance");
    writeJson(obj.variance, jsonWriter, context);
  }

  if (obj.sum) {
    jsonWriter.Key("sum");
    writeJson(obj.sum, jsonWriter, context);
  }

  if (!obj.occurrences.empty()) {
    jsonWriter.Key("occurrences");
    writeJson(obj.occurrences, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Schema& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("id");
  writeJson(obj.id, jsonWriter, context);

  if (obj.name) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  if (obj.description) {
    jsonWriter.Key("description");
    writeJson(obj.description, jsonWriter, context);
  }

  if (obj.version) {
    jsonWriter.Key("version");
    writeJson(obj.version, jsonWriter, context);
  }

  if (!obj.classes.empty()) {
    jsonWriter.Key("classes");
    writeJson(obj.classes, jsonWriter, context);
  }

  if (!obj.enums.empty()) {
    jsonWriter.Key("enums");
    writeJson(obj.enums, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Enum& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.name) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  if (obj.description) {
    jsonWriter.Key("description");
    writeJson(obj.description, jsonWriter, context);
  }

  if (obj.valueType != Cesium3DTiles::Enum::ValueType::UINT16) {
    jsonWriter.Key("valueType");
    writeJson(obj.valueType, jsonWriter, context);
  }

  if (!obj.values.empty()) {
    jsonWriter.Key("values");
    writeJson(obj.values, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::EnumValue& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("name");
  writeJson(obj.name, jsonWriter, context);

  if (obj.description) {
    jsonWriter.Key("description");
    writeJson(obj.description, jsonWriter, context);
  }

  jsonWriter.Key("value");
  writeJson(obj.value, jsonWriter, context);

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Class& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.name) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  if (obj.description) {
    jsonWriter.Key("description");
    writeJson(obj.description, jsonWriter, context);
  }

  if (!obj.properties.empty()) {
    jsonWriter.Key("properties");
    writeJson(obj.properties, jsonWriter, context);
  }

  if (obj.parent) {
    jsonWriter.Key("parent");
    writeJson(obj.parent, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::ClassProperty& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.name) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  if (obj.description) {
    jsonWriter.Key("description");
    writeJson(obj.description, jsonWriter, context);
  }

  jsonWriter.Key("type");
  writeJson(obj.type, jsonWriter, context);

  if (obj.componentType) {
    jsonWriter.Key("componentType");
    writeJson(obj.componentType, jsonWriter, context);
  }

  if (obj.enumType) {
    jsonWriter.Key("enumType");
    writeJson(obj.enumType, jsonWriter, context);
  }

  if (obj.array) {
    jsonWriter.Key("array");
    writeJson(obj.array, jsonWriter, context);
  }

  if (obj.count) {
    jsonWriter.Key("count");
    writeJson(obj.count, jsonWriter, context);
  }

  if (obj.normalized) {
    jsonWriter.Key("normalized");
    writeJson(obj.normalized, jsonWriter, context);
  }

  if (obj.offset) {
    jsonWriter.Key("offset");
    writeJson(obj.offset, jsonWriter, context);
  }

  if (obj.scale) {
    jsonWriter.Key("scale");
    writeJson(obj.scale, jsonWriter, context);
  }

  if (obj.max) {
    jsonWriter.Key("max");
    writeJson(obj.max, jsonWriter, context);
  }

  if (obj.min) {
    jsonWriter.Key("min");
    writeJson(obj.min, jsonWriter, context);
  }

  if (obj.required) {
    jsonWriter.Key("required");
    writeJson(obj.required, jsonWriter, context);
  }

  if (obj.noData) {
    jsonWriter.Key("noData");
    writeJson(obj.noData, jsonWriter, context);
  }

  if (obj.defaultProperty) {
    jsonWriter.Key("default");
    writeJson(obj.defaultProperty, jsonWriter, context);
  }

  if (obj.semantic) {
    jsonWriter.Key("semantic");
    writeJson(obj.semantic, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Subtree& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (!obj.buffers.empty()) {
    jsonWriter.Key("buffers");
    writeJson(obj.buffers, jsonWriter, context);
  }

  if (!obj.bufferViews.empty()) {
    jsonWriter.Key("bufferViews");
    writeJson(obj.bufferViews, jsonWriter, context);
  }

  if (!obj.propertyTables.empty()) {
    jsonWriter.Key("propertyTables");
    writeJson(obj.propertyTables, jsonWriter, context);
  }

  jsonWriter.Key("tileAvailability");
  writeJson(obj.tileAvailability, jsonWriter, context);

  if (!obj.contentAvailability.empty()) {
    jsonWriter.Key("contentAvailability");
    writeJson(obj.contentAvailability, jsonWriter, context);
  }

  jsonWriter.Key("childSubtreeAvailability");
  writeJson(obj.childSubtreeAvailability, jsonWriter, context);

  if (obj.tileMetadata) {
    jsonWriter.Key("tileMetadata");
    writeJson(obj.tileMetadata, jsonWriter, context);
  }

  if (!obj.contentMetadata.empty()) {
    jsonWriter.Key("contentMetadata");
    writeJson(obj.contentMetadata, jsonWriter, context);
  }

  if (obj.subtreeMetadata) {
    jsonWriter.Key("subtreeMetadata");
    writeJson(obj.subtreeMetadata, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::MetadataEntity& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  writeMetadataEntity(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Availability& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.bitstream) {
    jsonWriter.Key("bitstream");
    writeJson(obj.bitstream, jsonWriter, context);
  }

  if (obj.availableCount) {
    jsonWriter.Key("availableCount");
    writeJson(obj.availableCount, jsonWriter, context);
  }

  if (obj.constant) {
    jsonWriter.Key("constant");
    writeJson(obj.constant, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::PropertyTable& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.name) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  jsonWriter.Key("class");
  writeJson(obj.classProperty, jsonWriter, context);

  jsonWriter.Key("count");
  writeJson(obj.count, jsonWriter, context);

  if (!obj.properties.empty()) {
    jsonWriter.Key("properties");
    writeJson(obj.properties, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::PropertyTableProperty& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("values");
  writeJson(obj.values, jsonWriter, context);

  if (obj.arrayOffsets) {
    jsonWriter.Key("arrayOffsets");
    writeJson(obj.arrayOffsets, jsonWriter, context);
  }

  if (obj.stringOffsets) {
    jsonWriter.Key("stringOffsets");
    writeJson(obj.stringOffsets, jsonWriter, context);
  }

  if (obj.arrayOffsetType !=
      Cesium3DTiles::PropertyTableProperty::ArrayOffsetType::UINT32) {
    jsonWriter.Key("arrayOffsetType");
    writeJson(obj.arrayOffsetType, jsonWriter, context);
  }

  if (obj.stringOffsetType !=
      Cesium3DTiles::PropertyTableProperty::StringOffsetType::UINT32) {
    jsonWriter.Key("stringOffsetType");
    writeJson(obj.stringOffsetType, jsonWriter, context);
  }

  if (obj.offset) {
    jsonWriter.Key("offset");
    writeJson(obj.offset, jsonWriter, context);
  }

  if (obj.scale) {
    jsonWriter.Key("scale");
    writeJson(obj.scale, jsonWriter, context);
  }

  if (obj.max) {
    jsonWriter.Key("max");
    writeJson(obj.max, jsonWriter, context);
  }

  if (obj.min) {
    jsonWriter.Key("min");
    writeJson(obj.min, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::BufferView& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("buffer");
  writeJson(obj.buffer, jsonWriter, context);

  jsonWriter.Key("byteOffset");
  writeJson(obj.byteOffset, jsonWriter, context);

  jsonWriter.Key("byteLength");
  writeJson(obj.byteLength, jsonWriter, context);

  if (obj.name) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Buffer& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.uri) {
    jsonWriter.Key("uri");
    writeJson(obj.uri, jsonWriter, context);
  }

  jsonWriter.Key("byteLength");
  writeJson(obj.byteLength, jsonWriter, context);

  if (obj.name) {
    jsonWriter.Key("name");
    writeJson(obj.name, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Tileset& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("asset");
  writeJson(obj.asset, jsonWriter, context);

  if (!obj.properties.empty()) {
    jsonWriter.Key("properties");
    writeJson(obj.properties, jsonWriter, context);
  }

  if (obj.schema) {
    jsonWriter.Key("schema");
    writeJson(obj.schema, jsonWriter, context);
  }

  if (obj.schemaUri) {
    jsonWriter.Key("schemaUri");
    writeJson(obj.schemaUri, jsonWriter, context);
  }

  if (obj.statistics) {
    jsonWriter.Key("statistics");
    writeJson(obj.statistics, jsonWriter, context);
  }

  if (!obj.groups.empty()) {
    jsonWriter.Key("groups");
    writeJson(obj.groups, jsonWriter, context);
  }

  if (obj.metadata) {
    jsonWriter.Key("metadata");
    writeJson(obj.metadata, jsonWriter, context);
  }

  jsonWriter.Key("geometricError");
  writeJson(obj.geometricError, jsonWriter, context);

  jsonWriter.Key("root");
  writeJson(obj.root, jsonWriter, context);

  if (!obj.extensionsUsed.empty()) {
    jsonWriter.Key("extensionsUsed");
    writeJson(obj.extensionsUsed, jsonWriter, context);
  }

  if (!obj.extensionsRequired.empty()) {
    jsonWriter.Key("extensionsRequired");
    writeJson(obj.extensionsRequired, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Tile& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("boundingVolume");
  writeJson(obj.boundingVolume, jsonWriter, context);

  if (obj.viewerRequestVolume) {
    jsonWriter.Key("viewerRequestVolume");
    writeJson(obj.viewerRequestVolume, jsonWriter, context);
  }

  jsonWriter.Key("geometricError");
  writeJson(obj.geometricError, jsonWriter, context);

  if (obj.refine) {
    jsonWriter.Key("refine");
    writeJson(obj.refine, jsonWriter, context);
  }

  static const std::vector<double> transformDefault =
      {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};
  if (obj.transform != transformDefault) {
    jsonWriter.Key("transform");
    writeJson(obj.transform, jsonWriter, context);
  }

  if (obj.content) {
    jsonWriter.Key("content");
    writeJson(obj.content, jsonWriter, context);
  }

  if (!obj.contents.empty()) {
    jsonWriter.Key("contents");
    writeJson(obj.contents, jsonWriter, context);
  }

  if (obj.metadata) {
    jsonWriter.Key("metadata");
    writeJson(obj.metadata, jsonWriter, context);
  }

  if (obj.implicitTiling) {
    jsonWriter.Key("implicitTiling");
    writeJson(obj.implicitTiling, jsonWriter, context);
  }

  if (!obj.children.empty()) {
    jsonWriter.Key("children");
    writeJson(obj.children, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::ImplicitTiling& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("subdivisionScheme");
  writeJson(obj.subdivisionScheme, jsonWriter, context);

  jsonWriter.Key("subtreeLevels");
  writeJson(obj.subtreeLevels, jsonWriter, context);

  jsonWriter.Key("availableLevels");
  writeJson(obj.availableLevels, jsonWriter, context);

  jsonWriter.Key("subtrees");
  writeJson(obj.subtrees, jsonWriter, context);

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Subtrees& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("uri");
  writeJson(obj.uri, jsonWriter, context);

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Content& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (obj.boundingVolume) {
    jsonWriter.Key("boundingVolume");
    writeJson(obj.boundingVolume, jsonWriter, context);
  }

  jsonWriter.Key("uri");
  writeJson(obj.uri, jsonWriter, context);

  if (obj.metadata) {
    jsonWriter.Key("metadata");
    writeJson(obj.metadata, jsonWriter, context);
  }

  if (obj.group) {
    jsonWriter.Key("group");
    writeJson(obj.group, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::BoundingVolume& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  if (!obj.box.empty()) {
    jsonWriter.Key("box");
    writeJson(obj.box, jsonWriter, context);
  }

  if (!obj.region.empty()) {
    jsonWriter.Key("region");
    writeJson(obj.region, jsonWriter, context);
  }

  if (!obj.sphere.empty()) {
    jsonWriter.Key("sphere");
    writeJson(obj.sphere, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::GroupMetadata& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  writeMetadataEntity(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Properties& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("maximum");
  writeJson(obj.maximum, jsonWriter, context);

  jsonWriter.Key("minimum");
  writeJson(obj.minimum, jsonWriter, context);

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

void writeJson(
    const Cesium3DTiles::Asset& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  jsonWriter.StartObject();

  jsonWriter.Key("version");
  writeJson(obj.version, jsonWriter, context);

  if (obj.tilesetVersion) {
    jsonWriter.Key("tilesetVersion");
    writeJson(obj.tilesetVersion, jsonWriter, context);
  }

  writeExtensibleObject(obj, jsonWriter, context);

  jsonWriter.EndObject();
}

} // namespace

void Extension3dTilesBoundingVolumeS2JsonWriter::write(
    const Cesium3DTiles::Extension3dTilesBoundingVolumeS2& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void Extension3dTilesEllipsoidJsonWriter::write(
    const Cesium3DTiles::Extension3dTilesEllipsoid& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void ExtensionContent3dTilesContentVoxelsJsonWriter::write(
    const Cesium3DTiles::ExtensionContent3dTilesContentVoxels& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void PaddingJsonWriter::write(
    const Cesium3DTiles::Padding& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void StatisticsJsonWriter::write(
    const Cesium3DTiles::Statistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void ClassStatisticsJsonWriter::write(
    const Cesium3DTiles::ClassStatistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void PropertyStatisticsJsonWriter::write(
    const Cesium3DTiles::PropertyStatistics& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void SchemaJsonWriter::write(
    const Cesium3DTiles::Schema& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void EnumJsonWriter::write(
    const Cesium3DTiles::Enum& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void EnumValueJsonWriter::write(
    const Cesium3DTiles::EnumValue& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void ClassJsonWriter::write(
    const Cesium3DTiles::Class& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void ClassPropertyJsonWriter::write(
    const Cesium3DTiles::ClassProperty& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void SubtreeJsonWriter::write(
    const Cesium3DTiles::Subtree& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void MetadataEntityJsonWriter::write(
    const Cesium3DTiles::MetadataEntity& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void AvailabilityJsonWriter::write(
    const Cesium3DTiles::Availability& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void PropertyTableJsonWriter::write(
    const Cesium3DTiles::PropertyTable& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void PropertyTablePropertyJsonWriter::write(
    const Cesium3DTiles::PropertyTableProperty& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void BufferViewJsonWriter::write(
    const Cesium3DTiles::BufferView& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void BufferJsonWriter::write(
    const Cesium3DTiles::Buffer& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void TilesetJsonWriter::write(
    const Cesium3DTiles::Tileset& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void TileJsonWriter::write(
    const Cesium3DTiles::Tile& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void ImplicitTilingJsonWriter::write(
    const Cesium3DTiles::ImplicitTiling& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void SubtreesJsonWriter::write(
    const Cesium3DTiles::Subtrees& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void ContentJsonWriter::write(
    const Cesium3DTiles::Content& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void BoundingVolumeJsonWriter::write(
    const Cesium3DTiles::BoundingVolume& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void GroupMetadataJsonWriter::write(
    const Cesium3DTiles::GroupMetadata& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void PropertiesJsonWriter::write(
    const Cesium3DTiles::Properties& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

void AssetJsonWriter::write(
    const Cesium3DTiles::Asset& obj,
    CesiumJsonWriter::JsonWriter& jsonWriter,
    const CesiumJsonWriter::ExtensionWriterContext& context) {
  writeJson(obj, jsonWriter, context);
}

} // namespace Cesium3DTilesWriter
