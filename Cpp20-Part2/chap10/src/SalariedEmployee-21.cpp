// Fig.10.22: SalariedEmployee.cpp
// SalariedEmployee class member-function definition
#include <fmt/format.h>
#include <stdexcept>
#include "SalariedEmployee-21.h"

// constructor
SalariedEmployee::SalariedEmployee(std::string_view name, double salary)
    : Employee{name} {
        setSalary(salary);
}

// set salary
void SalariedEmployee::setSalary(double salary) {
    if (salary < 0.0) {
        throw std::invalid_argument("Weekly salary must be <= 0.0");
    }

    m_salary = salary;
}

// return salary
double SalariedEmployee::getSalary() const {return m_salary;}

// calculate earnings
// override pure virtual function getPay in Employee
double SalariedEmployee::getPay() const {return getSalary();}

// return a string representation of SalariedEmployee
std::string SalariedEmployee::getString() const {
    return fmt::format("{}\n{}: ${:.2f}", Employee::getString(),
            "salary", getSalary());
}
