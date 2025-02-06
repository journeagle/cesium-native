// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/ClassProperty.h>
#include <CesiumGltf/Library.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <optional>
#include <string>
#include <unordered_map>

namespace CesiumGltf {
/**
 * @brief A class containing a set of properties.
 */
struct CESIUMGLTF_API Class final : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "Class";

  /**
   * @brief The name of the class, e.g. for display purposes.
   */
  std::optional<std::string> name;

  /**
   * @brief The description of the class.
   */
  std::optional<std::string> description;

  /**
   * @brief A dictionary, where each key is a property ID and each value is an
   * object defining the property. Property IDs must be alphanumeric identifiers
   * matching the regular expression `^[a-zA-Z_][a-zA-Z0-9_]*$`.
   */
  std::unordered_map<std::string, CesiumGltf::ClassProperty> properties;

  /**
   * @brief Experimental. The parent class ID.
   */
  std::optional<std::string> parent;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(Class));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));
    if (this->name) {
      accum += int64_t(this->name->capacity() * sizeof(char));
    }
    if (this->description) {
      accum += int64_t(this->description->capacity() * sizeof(char));
    }
    accum += int64_t(
        this->properties.bucket_count() *
        (sizeof(std::string) + sizeof(CesiumGltf::ClassProperty)));
    for (const auto& [k, v] : this->properties) {
      accum += int64_t(k.capacity() * sizeof(char) - sizeof(std::string));
      accum += v.getSizeBytes() - int64_t(sizeof(CesiumGltf::ClassProperty));
    }
    if (this->parent) {
      accum += int64_t(this->parent->capacity() * sizeof(char));
    }
    return accum;
  }
};
} // namespace CesiumGltf
