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

/// @brief 文字列をEnumに変換
/// @param level 文字列
/// @return ログレベルEnumクラス
LogLevel fromString(const std::string &level);

/// @brief ログレベルの文字列を取得
/// @param level ログレベル
/// @return ログレベル文字列
std::string toString(LogLevel level);