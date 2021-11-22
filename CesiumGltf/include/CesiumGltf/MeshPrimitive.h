// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Library.h"
#include <CesiumUtility/ExtensibleObject.h>
#include <cstdint>
#include <unordered_map>
#include <vector>

namespace CesiumGltf {
    /**
     * @brief Geometry to be rendered with the given material.
     */
    struct CESIUMGLTF_API MeshPrimitive final : public CesiumUtility::ExtensibleObject {
        static inline constexpr const char* TypeName = "MeshPrimitive";

        /**
         * @brief Known values for The topology type of primitives to render.
         */
        struct Mode {
            static constexpr int32_t POINTS = 0;

            static constexpr int32_t LINES = 1;

            static constexpr int32_t LINE_LOOP = 2;

            static constexpr int32_t LINE_STRIP = 3;

            static constexpr int32_t TRIANGLES = 4;

            static constexpr int32_t TRIANGLE_STRIP = 5;

            static constexpr int32_t TRIANGLE_FAN = 6;
        };

        /**
         * @brief A plain JSON object, where each key corresponds to a mesh attribute semantic and each value is the index of the accessor containing attribute's data.
         */
        std::unordered_map<std::string, int32_t> attributes;

        /**
         * @brief The index of the accessor that contains the vertex indices.
         *
         * When this is undefined, the primitive defines non-indexed geometry.  When defined, the accessor **MUST** have `SCALAR` type and an unsigned integer component type.
         */
        int32_t indices = -1;

        /**
         * @brief The index of the material to apply to this primitive when rendering.
         */
        int32_t material = -1;

        /**
         * @brief The topology type of primitives to render.
         * 
         * Known values are defined in {@link Mode}.
         *
         */
        int32_t mode = Mode::TRIANGLES;

        /**
         * @brief An array of morph targets.
         */
        std::vector<std::unordered_map<std::string, int32_t>> targets;

    };
}
