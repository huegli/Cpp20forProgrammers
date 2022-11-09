// Fig. 10.34: Salaried.h
// Salaried compensation model
#pragma once
#include <string>

class Salaried {
public:
    Salaried(double salary);
    double earnings() const;
    std::string toString() const;
private:
    double m_salary{0.0};
};
