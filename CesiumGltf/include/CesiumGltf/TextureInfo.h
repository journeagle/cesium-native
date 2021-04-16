// This file was generated by generate-gltf-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltf/ExtensibleObject.h"
#include "CesiumGltf/Library.h"
#include <cstdint>

namespace CesiumGltf {
/**
 * @brief Reference to a texture.
 */
struct CESIUMGLTF_API TextureInfo : public ExtensibleObject {
  static inline constexpr const char* TypeName = "TextureInfo";

  /**
   * @brief The index of the texture.
   */
  int32_t index = -1;

  /**
   * @brief The set index of texture's TEXCOORD attribute used for texture
   * coordinate mapping.
   *
   * This integer value is used to construct a string in the format
   * `TEXCOORD_<set index>` which is a reference to a key in
   * mesh.primitives.attributes (e.g. A value of `0` corresponds to
   * `TEXCOORD_0`). Mesh must have corresponding texture coordinate attributes
   * for the material to be applicable to it.
   */
  int64_t texCoord = 0;
};
} // namespace CesiumGltf
