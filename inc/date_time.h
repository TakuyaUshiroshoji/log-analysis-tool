#pragma once
#include <string>

class DateTime {
  public:
    explicit DateTime(const std::string &raw);
    std::string toString() const;

  private:
    std::string raw_;
};