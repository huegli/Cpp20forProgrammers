// fig10_45.cpp
// Driver for multiple-inheritance example.
#include <fmt/core.h>
#include <fmt/format.h>
#include <iostream>
#include "Base1.h"
#include "Base2.h"
#include "Derived.h"

int main() {
    Base1 base1{10}; // create Base1 object
    Base2 base2{'2'}; // create Base2 object
    Derived derived{7, 'A', 3.5}; // create Derived object

    // print data in each object
    std::cout << fmt::format("{}: {}\n{}: {}\n{}: {}\n\n",
        "Object base1 contains", base1.getData(),
        "Object base2 contains the character", base2.getData(),
        "Object derived contains", derived.toString());

    // print data members of derived-class object
    // scope-resolution operator resolves getData ambiguity
    std::cout << fmt::format("{}\n{}: {}\n{}: {}\n{}: {}\n\n",
        "Data members of Derived can be accessed individually:",
        "int", derived.Base1::getData(),
        "char", derived.Base2::getData(),
        "double", derived.getReal());

    std::cout << "Derived can be treated as an object"
        << " of either base class:\n";

    // treat Derived as a Base1 object
    Base1* base1Ptr = &derived;
    std::cout << fmt::format("base1Ptr->getData() yields {}\n",
        base1Ptr->getData());

    // treat Derived as a Base2 object
    Base2* base2Ptr = &derived;
    std::cout << fmt::format("base2Ptr->getData() yields {}\n",
        base2Ptr->getData());
    
}
