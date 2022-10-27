// Fig. 9.7: Time.h
// Time class definition.
// Member functions are defined in Time.cpp
#pragma once // prevent multiple inclusions of header
#include <string>

// Time Classe definition
class Time {
public:
    void setTime(int hour, int minute, int second);
    std::string to24HourString() const; // 24-hour string format
    std::string to12HourString() const; // 12-hour string format
private:
    int m_hour{0}; // 0 - 23 (24 hour clock format)
    int m_minute{0}; // 0 - 59
    int m_second{0}; // 0 - 59
};
