// fig10_03.cpp
// SalariedEmployee class test program.
#include <fmt/format.h>
#include <iostream>
#include "SalariedEmployee.h"

int main() {
    // instantiate a SalariedEmployee object
    SalariedEmployee employee{"Sue Jones", 300.0};

    // get SalariedEmployee data
    std::cout << "Employee information objtained by get functions:\n"
        << fmt::format("name: {}\nsalary: ${:.2f}\n", employee.getName(),
                employee.getSalary());

    employee.setSalary(500.0);
    std::cout << "\nUpdated employee information from function toString:\n"
        << employee.toString();

    // display only the employee's earnings
    std::cout << fmt::format("\nearnings: ${:2f}\n", employee.earnings());
}
