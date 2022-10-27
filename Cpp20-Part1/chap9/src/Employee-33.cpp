// Fig. 9.34: Employee.cpp
// Employee class member-function definitions
#include <fmt/format.h>
#include <iostream>
#include "Employee-33.h"
using namespace std;

// define static member function that returns number of
// Employee objects instantiated (declared static in Employee.h)
int Employee::getCount() {return m_count;}

// constructor initializes non-static data members and
// increments static data member count
Employee::Employee(string_view firstName, string_view lastName)
    : m_firstName(firstName), m_lastName(lastName) {
    ++m_count; // increment static count of employees
    std::cout << fmt::format("Employee constructor called for {} {} \n",
        m_firstName, m_lastName);
}

// destructor decrements the count
Employee::~Employee() {
    std::cout << fmt::format("~Employee() called for {} {}\n",
        m_firstName, m_lastName);
    --m_count; // decrement static count of employees
}

// return first name of employee
const string& Employee::getFirstName() const {return m_firstName;}

// return last name of employee
const string& Employee::getLastName() const {return m_lastName;}
