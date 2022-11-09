// Fig. 10.38: Employee.h
// An Employee "has a" CompensationModel.
#pragma once // prevent multiple inclusions of header
#include <string>
#include <string_view>
#include <variant>
#include "Commission-36.h"
#include "Salaried-34.h"

// define a convienient name for the std::variant type
using CompensationModel = std::variant<Commission, Salaried>;

class Employee {
public:
    Employee(std::string_view name, CompensationModel model);
    void setCompensationModel(CompensationModel model);
    double earnings() const;
    std::string toString() const;
private:
    std::string m_name{};
    CompensationModel m_model; // note this is not a pointer
};
