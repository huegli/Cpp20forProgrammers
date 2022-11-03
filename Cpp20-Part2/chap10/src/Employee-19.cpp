// Fig.10.20: Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definitions are given for pure virtual functions
#include "fmt/format.h"
#include "Employee-19.h"

// constructor
Employee::Employee(std::string_view name) : m_name{name} {}

// set name
void Employee::setName(std::string_view name) {m_name = name;}

// get name
std::string Employee::getName() const {return m_name;}

// public non-virutual function; returns Employee's earnings
double Employee::earnings() const {return getPay();}

// public non-virtual function; returns Employee's string representation
std::string Employee::toString() const {return getString();}

// protected virtual function that derived classes can override and call
std::string Employee::getString() const {
    return fmt::format("name: {}", getName());
}
