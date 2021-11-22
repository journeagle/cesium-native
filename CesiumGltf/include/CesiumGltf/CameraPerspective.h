// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Library.h"
#include <CesiumUtility/ExtensibleObject.h>
#include <optional>

namespace CesiumGltf {
    /**
     * @brief A perspective camera containing properties to create a perspective projection matrix.
     */
    struct CESIUMGLTF_API CameraPerspective final : public CesiumUtility::ExtensibleObject {
        static inline constexpr const char* TypeName = "CameraPerspective";

        /**
         * @brief The floating-point aspect ratio of the field of view.
         *
         * When undefined, the aspect ratio of the rendering viewport **MUST** be used.
         */
        std::optional<double> aspectRatio;

        /**
         * @brief The floating-point vertical field of view in radians. This value **SHOULD** be less than π.
         */
        double yfov = double();

        /**
         * @brief The floating-point distance to the far clipping plane.
         *
         * When defined, `zfar` **MUST** be greater than `znear`. If `zfar` is undefined, client implementations **SHOULD** use infinite projection matrix.
         */
        std::optional<double> zfar;

        /**
         * @brief The floating-point distance to the near clipping plane.
         */
        double znear = double();

    };
}
