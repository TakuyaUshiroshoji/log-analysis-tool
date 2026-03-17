#pragma once
#include "date_time.h"
#include "log_level.h"

#include <string>

class LogEntry {
  public:
    LogEntry(const DateTime &date_time, LogLevel level, const std::string &message);

  private:
    // 時刻取得
    const DateTime &getDateTime() const;
    // ログレベル取得
    LogLevel getLevel() const;
    // ログメッセージ取得
    const std::string &getMessage() const;

    // 時刻
    DateTime date_time_;
    // ログレベル
    LogLevel level_;
    // ログメッセージ
    std::string message_;
};