// Fig. 9.25: Employee.h
// Employee class definition showing composition
// Member functions defined in Employee.cpp
#pragma once
#include <string>
#include <string_view>
#include "Date-23.h"

class Employee {
public:
    Employee(std::string_view firstName, std::string_view lastName,
            const Date& birthDate, const Date& hireDate);
    std::string toString() const;
    ~Employee(); // provided to confirm destruction order
private:
    std::string m_firstName;
    std::string m_lastName;
    Date m_birthDate;
    Date m_hireDate;
};
