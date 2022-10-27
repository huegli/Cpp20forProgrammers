// fig09_18.cpp
// public member function that
// returns a reference to private data
#include <iostream>
#include <fmt/format.h>
#include "Time-17.h"
#include "fmt/core.h"

int main() {
    Time t{}; // Create Time object
    
    // initialize hourRef with the reference returned by badSetHour
    int& hourRef{t.badSetHour(20)}; // 20 is a valid hour

    std::cout << fmt::format(
            "Valid hour before modification: {}\n", hourRef);
    hourRef = 30; // use hourRef to set invalid value in Time object t
    std::cout << fmt::format(
            "Invalid hour after modification: {}\n\n", t.getHour());

    // Dangerous: Function call that returns a reference can b
    // used as an lvalue: POOR PROGRAMING PRACTIVE!!!!!!
    t.badSetHour(12) = 74; // assign another invalue value to hour

    std::cout << "After using t.badSetHour(12) as an lvalue, "
        << fmt::format("hour is: {}\n", t.getHour());
}
