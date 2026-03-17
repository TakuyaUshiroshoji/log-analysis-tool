#include "log_level.h"

#include <string>

std::string toString(LogLevel level) {
    switch (level) {
    case LogLevel::kError:
        return "ERROR";
        break;
    case LogLevel::kWarn:
        return "WARN";
        break;
    case LogLevel::kInfo:
        return "INFO";
        break;
    default:
        return "UNKNOWN";
        break;
    }
}