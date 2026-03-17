#pragma once
#include <string>

/// @brief ログレベルEnumクラス
enum class LogLevel {
    /// @brief エラー
    kError,
    /// @brief ワーニング
    kWarn,
    /// @brief インフォ
    kInfo
};

/// @brief ログレベルの文字列を取得
/// @param level ログレベル
/// @return ログレベル文字列
std::string toString(LogLevel level);