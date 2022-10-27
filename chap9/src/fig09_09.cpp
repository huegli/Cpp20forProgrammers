// fig09_09.cpp
// Program to test class Time.
// NOTE: This file must be linked with Time.cpp
#include <fmt/format.h>
#include <iostream>
#include <stdexcept>
#include <string_view>
#include "Time.h"

// displays a time in 24-hour and 12-hour formats
void displayTime(std::string_view message, const Time& time) {
    std::cout << fmt::format("{}\n24-hour time: {}\n12-hour time: {}\n\n",
            message, time.to24HourString(), time.to12HourString());
}

int main() {
    Time t{};   // instantiate object t of class Time

    displayTime("Initial time:", t);
    t.setTime(13, 27,  6);    // change time
    displayTime("After setTime:", t);

    // attempt to set the time with invalid values
    try {
        t.setTime(99, 99, 99); // all values out of range
    }
    catch (const std::invalid_argument& e) {
        std::cout << fmt::format("Exception: {}\n\n", e.what());
    }

    // display t's value after attempting to set an invalid time
    displayTime("After attempting to set an invalid time:", t);
}
