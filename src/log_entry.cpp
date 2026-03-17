#include "log_entry.h"

#include "date_time.h"
#include "log_level.h"

#include <string>

LogEntry::LogEntry(const DateTime &date_time, LogLevel level, const std::string &message)
    : date_time_{date_time}, level_{level}, message_{message} {}

const DateTime &LogEntry::getDateTime() const { return date_time_; }

LogLevel LogEntry::getLevel() const { return level_; }

const std::string &LogEntry::getMessage() const { return message_; }