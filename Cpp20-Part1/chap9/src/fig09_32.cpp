// fig09_32.cpp
// Cascading member-function calls with the this pointer
#include <fmt/format.h>
#include <iostream>
#include "Time-30.h"

int main() {
    Time t{}; // create Time object

    t.setHour(18).setMinute(30).setSecond(22); // cascaded function calls
    
    // output time in 24-hour and 12-hour formats
    std::cout << fmt::format("24-hour time: {}\n12-hour time: {}\n\n",
            t.to24HourString(), t.to12HourString());

    // cascaded function calls
    std::cout << fmt::format("New 12-hour time: {}\n",
        t.setTime(20, 20, 20).to12HourString());
}
