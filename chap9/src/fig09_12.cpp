// fig09_12.cpp
// Constructor with the default arguments
#include <fmt/format.h>
#include <iostream>
#include <stdexcept>
#include <string>
#include "Time-10.h"

// displays a time in 24-hour and 12-hour formats
void displayTime(std::string_view message, const Time& time) {
    std::cout << fmt::format("{}\n24-hour time: {}\n12-hour time: {}\n\n",
            message, time.to24HourString(), time.to12HourString());
}

int main() {
    const Time t1{}; // all arguments defaulted
    const Time t2{2}; // hour specified; minute & second defaulted
    const Time t3{21, 34}; // hour & minute specified; second defaulted
    const Time t4{12, 25, 42}; // hour, minute & second specified

    std::cout << "Constructed with:\n\n";
    displayTime("t1: all arguments defaulted", t1);
    displayTime("t2: hour specified; minute and second defaulted", t2);
    displayTime("t3: hour and minute specified; second defaulted", t3);
    displayTime("t4: hour, minute and second specified", t4);

    // attempt to initialize t5 with invalid values
    try {
        const Time t5{27, 74, 99}; // all bad values specified
    }
    catch (const std::invalid_argument& e) {
        std::cerr << fmt::format("t5 not created: {}\n", e.what());
    }
}


