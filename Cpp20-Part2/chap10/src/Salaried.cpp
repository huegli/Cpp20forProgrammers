// Fig. 10.30: Salaried.cpp
// Salaried compensation model member-function definitions.
#include <fmt/format.h>
#include <fmt/format.h>
#include <stdexcept>
#include <type_traits>
#include "Salaried.h"

// constructor
Salaried::Salaried(double salary) : m_salary{salary} {
    if (m_salary < 0.0) {
        throw std::invalid_argument("Weekly salary must be >= 0.0");
    }
}

// override CompensationModel pure virtual function earnings
double Salaried::earnings() const {return m_salary;}

// override CompensationModel pure virtual function toString
std::string Salaried::toString() const {
    return fmt::format("salary: ${:.2f}", m_salary);
}
