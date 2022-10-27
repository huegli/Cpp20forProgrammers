// Fig. 9.10: Time.h
// Time class containing a constructor with default arguments
// Member functions defined in Time.cpp
#pragma once // prevent multiple inclusions of header
#include <string>

// Time class definition
class Time {
public:
    // default constructor because it can be called with no arguments
    explicit Time(int hour = 0, int minute = 0, int second = 0);

    // set functions
    void setTime(int hour, int minute, int second);
    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

    // get functions
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
