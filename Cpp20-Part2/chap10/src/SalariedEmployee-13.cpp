// Fig. 10.14: SalariedEmployee.cpp
// SalariedEmployee class member-function definition
#include <fmt/format.h>
#include <stdexcept>
#include <string>
#include <string_view>
#include "SalariedEmployee-13.h"

// constructor
SalariedEmployee::SalariedEmployee(std::string_view name, double salary)
    : Employee{name} {
        setSalary(salary);
}

// set salary
void SalariedEmployee::setSalary(double salary) {
    if (salary < 0.0) {
        throw std::invalid_argument("Weekly salary must be >= 0.0.");
    }
}

// get salary
double SalariedEmployee::getSalary() const {return m_salary;}

// calcute earnings
// override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const {return getSalary();}

// return a string representation of SalariedEmployee
std::string SalariedEmployee::toString() const {
    return fmt::format("{}\n{}: ${:.2f}", Employee::toString(),
        "salary", getSalary());
}
