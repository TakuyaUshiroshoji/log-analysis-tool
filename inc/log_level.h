#pragma once
#include <string>

enum class LogLevel { kError, kWarn, kInfo };

std::string toString(LogLevel level);