// Fig. 10.35: Salaried.cpp
// Salaried compensation model member-function definitions
#include <fmt/core.h>
#include <fmt/format.h>
#include <stdexcept>
#include <string>
#include "Salaried-34.h"

// constructor
Salaried::Salaried(double salary) : m_salary{salary} {
    if (m_salary < 0.0) {
        throw std::invalid_argument("Weekly salary mut be >= 0.0");
    }
}

// calculate earnings
double Salaried::earnings() const {return m_salary;}

// return string containing Salaried compensation model information
std::string Salaried::toString() const {
    return fmt::format("salary: ${:.2f}", m_salary);
}
