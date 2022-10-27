// Fig. 9.31: Time.cpp
// Time class member-function definitions
#include <fmt/format.h>
#include <stdexcept>
#include "Time-30.h"

// Time constructor initializes each data member
Time::Time(int hour, int minute, int second) {
    setTime(hour, minute, second);
}
