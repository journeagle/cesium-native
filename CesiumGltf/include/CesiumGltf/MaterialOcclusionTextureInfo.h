// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Library.h"
#include "TextureInfo.h"

namespace CesiumGltf {
    /**
     * @brief Material Occlusion Texture Info
     */
    struct CESIUMGLTF_API MaterialOcclusionTextureInfo final : public TextureInfo {
        static inline constexpr const char* TypeName = "MaterialOcclusionTextureInfo";

        /**
         * @brief A scalar multiplier controlling the amount of occlusion applied.
         *
         * A scalar parameter controlling the amount of occlusion applied. A value of `0.0` means no occlusion. A value of `1.0` means full occlusion. This value affects the final occlusion value as: `1.0 + strength * (<sampled occlusion texture value> - 1.0)`.
         */
        double strength = 1;

    };
}
