#include "date_time.h"

#include <string>

DateTime::DateTime(const std::string &raw) : raw_{raw} {}

std::string DateTime::toString() const { return raw_; }