// Fig. 9.11: Time.cpp
// Time class member-functhion definitions.
#include <fmt/format.h>
#include <stdexcept>
#include <string>
#include "Time-10.h"

// Time constructor initializes each data member
Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}

// set new Time value using 24-hour format
void Time::setTime(int hour, int minute, int second) {
    // validate hour, minute and second
    if (hour < 0 || hour >= 24) {
        throw std::invalid_argument{
            "hour was out of range"};
    }

    if (minute < 0 || minute >= 60) {
        throw std::invalid_argument{
            "minute was out of range"};
    }

    if (second < 0 || second >= 60) {
        throw std::invalid_argument{
            "second was out of range"};
    }

    m_hour = hour;
    m_minute = minute;
    m_second = second;
}

// return Time as a string in 24-hour format (HH:MM:SS)
std::string Time::to24HourString() const{
    return fmt::format("{:02d}:{:02d}:{:02d}", m_hour, m_minute, m_second);
}

// return Time as a string in 12-hour format (HH:MM:SS)
std::string Time::to12HourString() const{
    return fmt::format("{}:{:02d}:{:02d} {}",
            ((m_hour % 12 == 0) ? 12 : m_hour % 12), m_minute, m_second,
            (m_hour < 12 ? "AM" : "PM"));
}
