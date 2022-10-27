// Fig 9.17: Time.cpp
// Time class member function definitions.
#include <stdexcept>
#include "Time-17.h"

// set new Time value using 24-hour time
void Time::setTime(int hour, int minute, int second) {
    // validate hour, minute and second
    if (hour < 0 || hour >= 24) {
        throw std::invalid_argument{"hour was out of range"};
    }

    if (minute < 0 || minute >= 60) {
        throw std::invalid_argument{"minute was out of range"};
    }

    if (second < 0 || second >= 60) {
        throw std::invalid_argument{"second was out of range"};
    }

    m_hour = hour;
    m_minute = minute;
    m_second = second;
}

// return hour value
int Time::getHour() const {return m_hour;}

// poor practive: returning a reference to a private data member
int& Time::badSetHour(int hour) {
    setTime(hour, m_minute, m_second);
    return m_hour; // dangerous reference return
}
