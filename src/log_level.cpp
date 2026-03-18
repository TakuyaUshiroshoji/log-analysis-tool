#include "log_level.h"

#include <string>
#include <unordered_map>

LogLevel fromString(const std::string &level) {
    static const std::unordered_map<std::string, LogLevel> kLogLevelMap = {
        {"ERROR", LogLevel::kError}, {"WARN", LogLevel::kWarn}, {"INFO", LogLevel::kInfo}};

    const std::unordered_map<std::string, LogLevel>::const_iterator found =
        kLogLevelMap.find(level);

    if (found != kLogLevelMap.end()) {
        return found->second;
    }

    return LogLevel::kInfo;
}

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