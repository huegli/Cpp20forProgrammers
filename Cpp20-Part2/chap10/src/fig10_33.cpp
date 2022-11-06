// fig10_33.cpp
// Processing Employees with various CompensationModels.
#include <fmt/format.h>
#include <iostream>
#include <vector>
#include "Employee-27.h"
#include "Salaried.h"
#include "Commission.h"

int main() {
    // create CompensationModel and Employees
    Salaried salaried{800.0};
    Employee salariedEmployee{"John Smith", &salaried};

    Commission commission{10000, .06};
    Employee commissionEmployee{"Sue Jones", &commission};

    // create and initialize vector of Employees
    std::vector employees{salariedEmployee, commissionEmployee};

    // print each Employee's information and earnings
    for (const Employee& employee : employees) {
        std::cout << fmt::format("{}\n earned: ${:.2f}\n\n",
            employee.toString(), employee.earnings());
    }
}
