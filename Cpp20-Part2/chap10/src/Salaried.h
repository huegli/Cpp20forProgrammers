// Fig. 10.29: Salaried.h
// Salaried implements the CompensationModel interface
#pragma once
#include <string>
#include "CompensationModel.h" // CompensationModel definition

class Salaried final : public CompensationModel {
public:
    explicit Salaried(double salary);
    double earnings() const override;
    std::string toString() const override;
private:
    double m_salary{0.0};
};
