// Fig.9.19: Date.h
// Date class declaration. Member functions are defined in Date.cpp
#pragma once // prevent multiple inclusions of header
#include <string>

// class Date definition
class Date {
public:
    Date(int year, int month, int day);
    std::string toString() const;
private:
    int m_year;
    int m_month;
    int m_day;
};
