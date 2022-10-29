// fig10_07.cpp
// Aiming base-class and derived-class pointers at base-class
// and derived-class objects, respectively
#include <fmt/format.h>
#include <iostream>
#include "SalariedEmployee.h"
#include "SalariedCommissionEmployee.h"

int main() {
    // create base-class object
    SalariedEmployee salaried("Sue Jones", 500.0);

    // create derived-class object
    SalariedCommissionEmployee salariedCommission {
        "Bob Lewis", 300.0, 5000.0, .04};

    // output objects salaried and salariedCommission
    std::cout << fmt::format("{}:\n{}\n{}\n",
        "DISPLAY BASE-CLASS AND DERIVED-CLASS OBJECTS",
        salaried.toString(),
        salariedCommission.toString());

    // natural: aim base-class pointer at base-class object
    SalariedEmployee* salariedPtr{&salaried};
    std::cout << fmt::format("{}\n{}:\n{}\n",
        "CALLING TOSTRING WITH BASE-CLASS POINTER TO",
        "BASE-CLASS OBJECT INVOKES BASE-CLASS FUNCTIONALITY",
        salariedPtr->toString());

    // natural: aim derived-class pointer at derived-class object
    SalariedCommissionEmployee* salariedCommissionPtr{&salariedCommission};

    std::cout << fmt::format("{}\n{}:\n{}\n",
        "CALLING TOSTRING WITH DERIVED-CLASS POINTER TO",
        "DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS FUNCTIONALITY",
        salariedCommissionPtr->toString());

    // aim base-class pointer at derived-class object
    salariedPtr = &salariedCommission;
    std::cout << fmt::format("{}\n{}:\n{}\n",
        "CALLING TOSTRING WITH BASE-CLASS POINTER TO",
        "DERIVED-CLASS OBJECT INVOKES BASE-CLASS FUNCTIONALITY",
        salariedPtr->toString());
}
