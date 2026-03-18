#include "log_parser.h"

#include "date_time.h"
#include "log_entry.h"

#include <sstream>
#include <string>

LogEntry LogParser::parse(const std::string &log) {
    std::istringstream iss{log};
    std::string date, time, level_str, message;
    if (!(iss >> date >> time >> level_str)) {
        return LogEntry(DateTime{""}, LogLevel::kInfo, "");
    }

    // 残りをmessageとして取得
    std::getline(iss, message);
    // 先頭スペース削除
    if (!message.empty()) {
        message.erase(0, message.find_first_not_of(' '));
    }
    const DateTime date_time{date + " " + time};
    const LogLevel level{fromString(level_str)};

    return LogEntry(date_time, level, message);
}