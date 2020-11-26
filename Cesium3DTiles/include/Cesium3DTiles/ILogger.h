#pragma once

#include <string>
#include "Cesium3DTiles/Library.h"

namespace Cesium3DTiles {

    /**
     * @brief A minimalistic interface for loggers.
     * 
     * Instances of classes implementing this interface can be passed
     * to {@link Cesium3DTiles::Logging::registerLogger}, and will
     * receive the log messages that are generated by Cesium.
     */
    class CESIUM3DTILES_API ILogger {

    public:

        /**
         * @brief Enumeration of available log levels.
         */
        enum class Level {
            CESIUM_LOG_LEVEL_TRACE,
            CESIUM_LOG_LEVEL_DEBUG,
            CESIUM_LOG_LEVEL_INFO,
            CESIUM_LOG_LEVEL_WARN,
            CESIUM_LOG_LEVEL_ERROR,
            CESIUM_LOG_LEVEL_CRITICAL
        };

        /**
         * @brief Receives a log message on a certain level.
         * 
         * @param level The {@link Level}.
         * @param message The actual log message.
         */
        virtual void log(Level level, const std::string& message) = 0;
    };

}
