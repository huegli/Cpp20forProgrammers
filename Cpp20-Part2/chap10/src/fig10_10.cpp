// fig10_10.cpp
// Introducing polymorphism, virtual functions and dynamic binding
#include <fmt/format.h>
#include <iostream>
#include "SalariedEmployee-10.h"
#include "SalariedCommissionEmployee-10.h"

int main() {
    // create base-class object
    SalariedEmployee salaried("Sue Jones", 500.0);

    // create derived-class object
    SalariedCommissionEmployee salariedCommission {
        "Bob Lewis", 300.0, 5000.0, .04};

    // output objects using static binding
    std::cout << fmt::format("{}:\n{}\n{}\n",
        "INVOKING TOSTRING FUNCTION ON BASE-CLASS AND"
        "AND DERIVED-CLASS OBJECTS WITH STATIC BINDING",
        salaried.toString(),
        salariedCommission.toString());

    std::cout << "INVOKING TOSTRING FUNCTION ON BASE-CLASS AND"
        << "DERIVED-CLASS OBJECTS WITH DYNAMIC BINDING\n\n";


    // natural: aim base-class pointer at base-class object
    SalariedEmployee* salariedPtr{&salaried};
    std::cout << fmt::format("{}\n{}:\n{}\n",
        "CALLING VIRTUAL FUNCTION TOSTRING WITH BASE-CLASS POINTER TO",
        "BASE-CLASS OBJECT INVOKES BASE-CLASS FUNCTIONALITY",
        salariedPtr->toString());

    // natural: aim derived-class pointer at derived-class object
    SalariedCommissionEmployee* salariedCommissionPtr{&salariedCommission};
    std::cout << fmt::format("{}\n{}:\n{}\n",
        "CALLING VIRTUAL FUNCTION TOSTRING WITH DERIVED-CLASS POINTER TO",
        "DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS FUNCTIONALITY",
        salariedCommissionPtr->toString());

    // aim base-class pointer at derived-class object
    salariedPtr = &salariedCommission;
    
    // runtime polymorphism: invokes SalariedCommissionEmployee
    // via base-class pointer to derived-class object
    std::cout << fmt::format("{}\n{}:\n{}\n",
        "CALLING VIRTUAL FUNCTION TOSTRING WITH BASE-CLASS POINTER TO",
        "DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS FUNCTIONALITY",
        salariedPtr->toString());
}
