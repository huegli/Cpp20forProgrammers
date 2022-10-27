// Fig. 9.30: Time.h
// Time class modified to enable cascaded member function call
#pragma once
#include <string>

class Time {
public:
    // default constructor because it can be called with no arguments
    explicit Time(int hour = 0, int minute = 0, int second = 0);

    // set functions
    Time& setTime(int hour, int minute, int second);
    Time& setHour(int hour);
    Time& setMinute(int minute);
    Time& setSecond(int second);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    std::string to24HourString() const;
    std::string to12HourString() const;
private:
    int m_hour{0};
    int m_minute{0};
    int m_second{0};
};
