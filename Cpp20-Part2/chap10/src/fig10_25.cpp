// fig10_25.cpp
// Processing Employee derived-class objects with variable-name handles
// then polymorphically using base-class pointers and references
#include <fmt/format.h>
#include <iostream>
#include <vector>
#include "Employee-19.h"
#include "SalariedEmployee-21.h"
#include "CommissionEmployee-23.h"

void virtualViaPointer(const Employee* baseClassPtr);
void virtualViaReference(const Employee& baseClassRef);

int main() {
    // create derived-class objects
    SalariedEmployee salaried{"John Smith", 800.0};
    CommissionEmployee commission{"Sue Jones", 10000, .06};

    // output each Employee
    std::cout << "EMPLOYEES PROCESSED INDIVIDUALLY VIA VARIABLE NAMES\n"
        << fmt::format("{}\n{}{:.2f}\n\n{}\n{}{:.2f}\n\n",
            salaried.toString(), "earned $", salaried.earnings(),
            commission.toString(), "earned $", commission.earnings());

    // create and initialize vector of base-class pointers
    std::vector<Employee*> employees{&salaried, &commission};

    std::cout << "EMPLOYEES PROCESSED POLYMORPHICALLY VIA"
        << " DYNAMIC BINDING\n\n";

    // call virtualViaPointer to print each Employee
    // and earnings using dynamic binding
    std::cout << "VIRTUAL FUNCTION CALLS MADE VIA BASE-CLASS POINTERS\n";

    for (const Employee* employeePtr : employees) {
        virtualViaPointer(employeePtr);
    }

    // call virtualViaReference to print each Employee
    // and earnings using dynamic binding
    std::cout << "VIRTUAL FUNCTION CALLS MADE VIA BASE-CLASS REFERENCES\n";

    for (const Employee* employeePtr : employees) {
        virtualViaReference(*employeePtr); // note dereferenced pointer
    }
}

// call Employee virtual functions toString and earnings via a
// base-class pointer using dynamic binding
void virtualViaPointer(const Employee* baseClassPtr) {
    std::cout << fmt::format("{}\nearned ${:.2f}\n\n",
        baseClassPtr->toString(), baseClassPtr->earnings());
}

// call Employee virtual functions toString and earnings via a
// base-class reference using dynamic binding
void virtualViaReference(const Employee& baseClassRef) {
    std::cout << fmt::format("{}\nearned ${:.2f}\n\n",
        baseClassRef.toString(), baseClassRef.earnings());
}
