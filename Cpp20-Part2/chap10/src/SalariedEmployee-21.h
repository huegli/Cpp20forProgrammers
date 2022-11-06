// Fig. 10.21: SalariedEmployee.h
// SalariedEmployee class derived from Employee.
#pragma once
#include <string>
#include <string_view>
#include "Employee-19.h"

class SalariedEmployee final : public Employee {
public:
    SalariedEmployee(std::string_view name, double salary);
    virtual ~SalariedEmployee() = default;

    void setSalary(double salary);
    double getSalary() const;
private:
    double m_salary{0.0};

    // keyword override signals intent to override
    double getPay() const override; // calculate earnings
    std::string getString() const override; // string representation
};
