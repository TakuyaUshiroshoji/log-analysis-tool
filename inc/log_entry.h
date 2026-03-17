#pragma once
#include "date_time.h"
#include "log_level.h"

#include <string>

/// @brief ログ1件分のクラス
class LogEntry {
  public:
    /// @brief コンストラクタ
    /// @param date_time 時刻
    /// @param level ログレベル
    /// @param message ログメッセージ
    LogEntry(const DateTime &date_time, LogLevel level, const std::string &message);

    /// @brief 時刻取得
    /// @return 時刻
    const DateTime &getDateTime() const;

    /// @brief ログレベル取得
    /// @return ログレベル
    LogLevel getLevel() const;

    /// @brief ログメッセージ取得
    /// @return ログ文字列
    const std::string &getMessage() const;

  private:
    /// @brief 時刻
    DateTime date_time_;

    /// @brief ログレベル
    LogLevel level_;

    /// @brief ログメッセージ
    std::string message_;
};