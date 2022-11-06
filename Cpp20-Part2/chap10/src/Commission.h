// Fig. 10.31: Commission.h
// Commission implements the CompensationModel interface
#pragma once
#include <string>
#include "CompensationModel.h"

class Commission final : public CompensationModel {
public:
    Commission(double grossSales, double commissionRate);
    double earnings() const override;
    std::string toString() const override;
private:
    double m_grossSales{0.0};
    double m_commissionRate{0.0};
};
