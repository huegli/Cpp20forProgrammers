// Fig. 10.15: CommissionEmployee.h
// CommissionEmployee class derived from Employee.
#pragma once
#include <string>
#include <string_view>
#include "Employee.h"

class CommissionEmployee final : public Employee {
public:
    CommissionEmployee(std::string_view name, double grossSales,
        double commissionRate);
    virtual ~CommissionEmployee() = default; 

    void setGrossSales(double grossSales);
    double getGrossSales() const;

    void setCommissionRate(double commissionRate);
    double getCommissionRate() const;

    // keyword override signals intent to override
    double earnings() const override;
    std::string toString() const override;
private:
    double m_grossSales{0.0};
    double m_commissionRate{0.0};
};
