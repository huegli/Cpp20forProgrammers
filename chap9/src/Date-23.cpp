// Fig. 9.24: Date.cpp
// Date class member-function definitions
#include <array>
#include <fmt/format.h>
#include <iostream>
#include <stdexcept>
#include "Date-23.h"
#include "fmt/core.h"

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date(int year, int month, int day)
    : m_year{year}, m_month{month}, m_day{day} {
        if (m_month < 1 || m_month > monthsPerYear) {
            throw std::invalid_argument{"month must be 1-12"};
        }

        if (!checkDay(day)) {
            throw std::invalid_argument{
                "Invalid day for current month and year"};
        }

    // output Date object to show whe its constructor is called
    std::cout << fmt::format("Date object constructor: {}\n", toString());
}

// gets string representation of a Date in the form yyyy-mm-dd
std::string Date::toString() const {
    return fmt::format("{}-{:02d}-{:02d}", m_year, m_month, m_day);
}

// output Date object to show when its destructor is called
Date::~Date() {
    std::cout << fmt::format("Date object destructor: {}\n", toString());
}

// utility function to confirm proper day value based on
// month and year; handles leap years too
bool Date::checkDay(int day) const {
    // we ignore lement 0
    static const std::array daysPerMonth{
        0, 31, 28, 31, 30, 31, 31, 30, 31,30, 31, 30, 31};

    // determine whether testDay is valid for specified month
    if (1 <= day && day <= daysPerMonth.at(m_month)) {
        return true;
    }

    // February 29 check for leap year
    if (m_month == 2 && day == 29 && (m_year % 400 == 0 ||
        (m_year % 4 == 0 & m_year % 100 != 0))) {
            return true;
        }

    return false;
}
