// Fig. 10.27: Employee.h
// An Employee "has a" CompensationModel
#pragma once
#include <cstring>
#include <string>
#include <string_view>
#include "CompensationModel.h"


class Employee final {
public:
    Employee(std::string_view name, CompensationModel* modelPtr);
    void setCompensationModel(CompensationModel *modelPtr);
    double earnings() const;
    std::string toString() const;
private:
    std::string m_name{};
    CompensationModel* m_modelPtr{}; // pointer to an implementation object
};
