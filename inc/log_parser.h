#pragma once
#include "log_entry.h"

#include <string>

class LogParser {
  public:
    /// @brief 文字列ログを分解してオブジェクトにするクラス
    /// @param log ログ1件分の文字列
    /// @return LogEntryクラス
    static LogEntry parse(const std::string &log);
};