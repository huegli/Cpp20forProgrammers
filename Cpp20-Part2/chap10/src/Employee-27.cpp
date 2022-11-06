// Fig. 10.28: Employee.cpp
// Class Employee member-function definitions.
#include <cstring>
#include <fmt/format.h>
#include <string>
#include <string_view>
#include "CompensationModel.h"
#include "Employee-27.h"

// constructor performs "constructor injection" to initialize
// the CompensationModel pointer to a CompensationModel implementation
Employee::Employee(std::string_view name, CompensationModel* modelPtr)
    : m_name{name}, m_modelPtr{modelPtr} {}

// set function performs "property injection" to change the
// CompensationModel pointer to a new CompensationModel implementation
void Employee::setCompensationModel(CompensationModel* modelPtr) {
    m_modelPtr = modelPtr;
}

// use the CompensationModel to calculate the Employee's earnings
double Employee::earnings() const {
    return m_modelPtr->earnings();
}

// return string representation of Employee object
std::string Employee::toString() const {
    return fmt::format("{}\n{}", m_name, m_modelPtr->toString());
}
