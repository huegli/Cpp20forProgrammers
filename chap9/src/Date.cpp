// Fig. 9.20: Date.cpp
// Date class member-function definitions.
#include <fmt/format.h>
#include <string>
#include "Date.h"

// Date Constructor (should do range checking)
Date::Date(int year, int month, int day)
    : m_year{year}, m_month{month}, m_day{day} {}

// return string representationof a Data in the format yyyy-mm-dd
std::string Date::toString() const {
    return fmt::format("{}-{:02d}-{:02d}", m_year, m_month, m_day);
}
