// fig09_21.cpp
// Demonstrating that class objects can be assigned
// to each other using the default assignment operator.
#include <fmt/format.h>
#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    const Date date1{2006, 7, 4};
    Date date2{2022, 1, 1};

    std::cout << fmt::format("date1: {}\ndate2: {}\n\n",
        date1.toString(), date2.toString());
    date2 = date1;
    std::cout << fmt::format("After assignment, date2: {}\n",
        date2.toString());
}
