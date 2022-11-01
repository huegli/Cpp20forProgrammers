// Fig. 10.12: Employee.cpp
// Abstract-base-class Emplyoee member-function definitions
// Note: No definitions are given for pure virtual functions
#include <fmt/format.h>
#include "Employee.h"

// constructor
Employee::Employee(std::string_view name) : m_name{name} {} // empty body

// set name
void Employee::setName(std::string_view name) {m_name = name;}

// get name
std::string Employee::getName() const {return m_name;}

// return string representation of an Employee
std::string Employee::toString() const {
    return fmt::format("name: {}", getName());
}
