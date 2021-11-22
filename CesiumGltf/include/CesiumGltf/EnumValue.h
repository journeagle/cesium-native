// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "Library.h"
#include <CesiumUtility/ExtensibleObject.h>
#include <cstdint>
#include <optional>
#include <string>

namespace CesiumGltf {
    /**
     * @brief An enum value.
     */
    struct CESIUMGLTF_API EnumValue final : public CesiumUtility::ExtensibleObject {
        static inline constexpr const char* TypeName = "EnumValue";

        /**
         * @brief The name of the enum value.
         */
        std::string name;

        /**
         * @brief The description of the enum value.
         */
        std::optional<std::string> description;

        /**
         * @brief The integer enum value.
         */
        int64_t value = int64_t();

    };
}
