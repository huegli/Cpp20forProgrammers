// Fig. 10.37: Commission.cpp
// Commission member-function definitions
#include <fmt/core.h>
#include <fmt/format.h>
#include <stdexcept>
#include "Commission-36.h"

// constructor
Commission::Commission(double grossSales, double commissionRate)
    : m_grossSales{grossSales},  m_commissionRate{commissionRate} {

    if (m_grossSales < 0.0) {
        throw std::invalid_argument("Gross sales must be >= 0.0");
    }

    if (m_commissionRate <= 0.0 || m_commissionRate >= 1.0) {
        throw std::invalid_argument(
            "Commission rate must be > 0.0 and < 1.0");
    }
}

// calculate earnings
double Commission::earnings() const {
    return m_grossSales * m_commissionRate;
}

// return string containing Commission information
std::string Commission::toString() const {
    return fmt::format("gross ales: ${:.2f}; commission rate: {:.2f}",
        m_grossSales, m_commissionRate);
}
