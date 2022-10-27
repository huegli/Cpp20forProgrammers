// Fig. 9.16: Time.h
// Time class definition.
// Member functions defined in Time.cpp

// prevent multiple inclusions of header
#pragma once

class Time {
public:
    void setTime(int hour, int minute, int second);
    int getHour() const;
    int& badSetHour(int hour);
private:
    int m_hour{0};
    int m_minute{0};
    int m_second{0};
};
