#pragma once
#include <string>

/// @brief 時刻クラス
class DateTime {
  public:
    /// @brief コンストラクタ
    /// @param raw 時刻の生データ
    explicit DateTime(const std::string &raw);

    /// @brief 時刻文字列を取得
    /// @return 時刻文字列
    std::string toString() const;

  private:
    /// @brief 時刻文字列
    std::string raw_;
};