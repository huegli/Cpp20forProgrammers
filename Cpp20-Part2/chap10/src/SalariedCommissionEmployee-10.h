// Fig. 10.4: SalariedComissionEmployee.h
// SalariedCommissionEmployee class derived from class SalariedEmployee
#pragma once
#include <string>
#include <string_view>
#include "SalariedEmployee-10.h"

class SalariedCommissionEmployee : public SalariedEmployee {
public:
    SalariedCommissionEmployee(std::string_view name, double salary,
        double grossSales, double commissionRate);

    void setGrossSales(double grossSales);
    double getGrossSales() const;

    void setCommissionRate(double commissionRate);
    double getCommissionRate() const;

    double earnings() const override;
    std::string toString() const override;
private:
    double m_grossSales{0.0};
    double m_commissionRate{0.0};
};
