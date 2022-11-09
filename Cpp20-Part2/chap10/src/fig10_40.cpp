// fig10_40.cpp
// Processing Employees with various compensation models.
#include <fmt/format.h>
#include <iostream>
#include <vector>
#include "Employee-38.h"
#include "Salaried-34.h"
#include "Commission-36.h"

int main() {
    Employee salariedEmployee{"John Smith", Salaried{800.0}};
    Employee commissionEmployee{"Sue Jones", Commission{10000.0, .06}};

    // create and initialize vector of three Employees
    std::vector  employees{salariedEmployee, commissionEmployee};

    // print each Employee's information and earnings
    for (const Employee& employee : employees) {
        std::cout << fmt::format("{}\nearned: ${:.2f}\n\n",
                employee.toString(), employee.earnings());
    }
}
