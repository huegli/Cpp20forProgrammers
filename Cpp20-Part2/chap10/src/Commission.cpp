// Fig. 10.32: Commission.cpp
// Commission member-function definitions.
#include <fmt/format.h>
#include <stdexcept>
#include "Commission.h"

// constructor
Commission::Commission(double grossSales, double CommissionRate)
    : m_grossSales{grossSales}, m_commissionRate{CommissionRate} {

    if (m_grossSales < 0.0) {
        throw std::invalid_argument("Gross sales must be >= 0.0.");
    }

    if (m_commissionRate <= 0.0 || m_commissionRate >= 1.0) {
        throw std::invalid_argument(
            "Commission rate must be > 0.0 and < 1.0");
    }
}

// override CompensationModel pure virtual function earnings
double Commission::earnings() const {
    return m_grossSales * m_commissionRate;
}

// override CompensationModel pure virtual function toString
std::string Commission::toString() const {
    return fmt::format("gross sales: ${:.2f}: Commission rate: {:.2f}",
        m_grossSales, m_commissionRate);
}
