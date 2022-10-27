// Fig. 9.31: Time.cpp
// Time class member-function definitions
#include <fmt/format.h>
#include <stdexcept>
#include "Time-30.h"

// Time constructor initializes each data member
Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}

// set new Time value using 24-hour format
Time& Time::setTime(int hour, int minute, int second) {
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
    return *this; // enables cascading
}

// set hour value
Time& Time::setHour(int hour) {
    return setTime(hour, m_minute, m_second);
}

// set minute value
Time& Time::setMinute(int minute) {
    return setTime(m_hour, minute, m_second);
}

// set second value
Time& Time::setSecond(int second) {
    return setTime(m_hour, m_minute, second);
}

// return hour value
int Time::getHour() const {return m_hour;}

// return minute value
int Time::getMinute() const {return m_minute;}

// return second value
int Time::getSecond() const {return m_second;}

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

