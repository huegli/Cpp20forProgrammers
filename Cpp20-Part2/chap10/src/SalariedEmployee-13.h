// Fig. 10.13: SalariedEmployee.h
// SalariedEmployee class derived from Employee
#pragma once
#include <string>
#include <string_view>
#include "Employee.h"

class SalariedEmployee final : public Employee {
public:
    SalariedEmployee(std::string_view name, double salary);
    virtual ~SalariedEmployee() = default; // virtual destructor

    void setSalary(double salary);
    double getSalary() const;

    // keyword overrid signals intent to override
    double earnings() const override; 
    std::string toString() const override; 
private:
    double m_salary{0.0};
};
