// Fig. 10.39: Employee.cpp
// Class Employee member-function definitions
#include <fmt/core.h>
#include <fmt/format.h>
#include <string>
#include <string_view>
#include <variant>
#include "Employee-38.h"

// constructor
Employee::Employee(std::string_view name, CompensationModel model)
    : m_name{name}, m_model{model} {}

// change the Employee's  CompensationModel
void Employee::setCompensationModel(CompensationModel model) {
    m_model = model;
}

// return the Employee's earnings
double Employee::earnings() const {
    auto getEarnings{[](const auto& model){return model.earnings();}};
    return std::visit(getEarnings,  m_model);
}

// return string representation of an Employee object
std::string Employee::toString() const {
    auto getString{[](const auto& model){return model.toString();}};
    return fmt::format("{}\n{}", m_name, std::visit(getString, m_model));
}
