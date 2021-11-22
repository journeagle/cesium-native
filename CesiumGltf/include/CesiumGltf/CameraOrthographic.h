// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Library.h"
#include <CesiumUtility/ExtensibleObject.h>

namespace CesiumGltf {
    /**
     * @brief An orthographic camera containing properties to create an orthographic projection matrix.
     */
    struct CESIUMGLTF_API CameraOrthographic final : public CesiumUtility::ExtensibleObject {
        static inline constexpr const char* TypeName = "CameraOrthographic";

        /**
         * @brief The floating-point horizontal magnification of the view. This value **MUST NOT** be equal to zero. This value **SHOULD NOT** be negative.
         */
        double xmag = double();

        /**
         * @brief The floating-point vertical magnification of the view. This value **MUST NOT** be equal to zero. This value **SHOULD NOT** be negative.
         */
        double ymag = double();

        /**
         * @brief The floating-point distance to the far clipping plane. This value **MUST NOT** be equal to zero. `zfar` **MUST** be greater than `znear`.
         */
        double zfar = double();

        /**
         * @brief The floating-point distance to the near clipping plane.
         */
        double znear = double();

    };
}
