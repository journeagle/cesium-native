// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include <CesiumGltf/Library.h>
#include <CesiumGltf/Padding.h>
#include <CesiumUtility/ExtensibleObject.h>

#include <cstdint>
#include <optional>
#include <string>
#include <unordered_map>
#include <vector>

namespace CesiumGltf {
/**
 * @brief `EXT_primitive_voxels` extension for a primitive in a glTF model to
 * indicate voxel-based volumetric data
 */
struct CESIUMGLTF_API ExtensionExtPrimitiveVoxels final
    : public CesiumUtility::ExtensibleObject {
  /**
   * @brief The original name of this type.
   */
  static constexpr const char* TypeName = "ExtensionExtPrimitiveVoxels";
  /** @brief The official name of the extension. This should be the same as its
   * key in the `extensions` object. */
  static constexpr const char* ExtensionName = "EXT_primitive_voxels";

  /**
   * @brief The index of the shape in `KHR_implicit_shapes` that the voxel grid
   * adheres to.
   */
  int32_t shape = -1;

  /**
   * @brief Dimensions of the voxel grid. The values are interpreted with
   * respect to the shape indicated by `KHR_implicit_shapes`.
   */
  std::vector<int64_t> dimensions;

  /**
   * @brief The optional padding of the voxels.
   */
  std::optional<CesiumGltf::Padding> padding;

  /**
   * @brief A plain JSON object, where each key corresponds to an existing
   * semantic in the primitive's `attributes`, and each value is the attribute's
   * `noData` value. A `noData` value represents missing data — also known as a
   * sentinel value — wherever it appears.
   */
  std::unordered_map<std::string, std::vector<double>> noData;

  /**
   * @brief Calculates the size in bytes of this object, including the contents
   * of all collections, pointers, and strings. This will NOT include the size
   * of any extensions attached to the object. Calling this method may be slow
   * as it requires traversing the object's entire structure.
   */
  int64_t getSizeBytes() const {
    int64_t accum = 0;
    accum += int64_t(sizeof(ExtensionExtPrimitiveVoxels));
    accum += CesiumUtility::ExtensibleObject::getSizeBytes() -
             int64_t(sizeof(CesiumUtility::ExtensibleObject));
    accum += int64_t(sizeof(int64_t) * this->dimensions.capacity());
    if (this->padding) {
      accum +=
          this->padding->getSizeBytes() - int64_t(sizeof(CesiumGltf::Padding));
    }
    accum += int64_t(
        this->noData.bucket_count() *
        (sizeof(std::string) + sizeof(std::vector<double>)));
    for (const auto& [k, v] : this->noData) {
      accum += int64_t(k.capacity() * sizeof(char) - sizeof(std::string));
      accum += int64_t(sizeof(double) * v.capacity());
    }
    return accum;
  }
};
} // namespace CesiumGltf
