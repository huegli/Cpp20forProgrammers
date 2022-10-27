// figi06_0.3.cpp
// Using range-based for
#include <iostream>
#include <fmt/format.h>
#include <array>

int main() {
    std::array items{1, 2, 3, 4, 5}; // type inferred as array<int, 5>

    // display items before modifations
    std::cout << "items before modification: ";
    for (const int& item : items) { // item is a a reference to a const int
        std::cout << fmt::format("{} ", item);
    }

    // multiply the elements of items by 2
    for (int& item : items) { // item is a a reference to a int
        item *= 2;
    }

    // display items after modifations
    std::cout << "\nitems after modification: ";
    for (const int& item : items) { // item is a a reference to a const int
        std::cout << fmt::format("{} ", item);
    }

    // sum elements of items using range-based for with initializing
    std::cout << "\n\ncalculating a running total of items' values:\n";
    for (int runningTotal{0}; const int& item : items) {
        runningTotal += item;
        std::cout << fmt::format("item: {}; running total: {}\n",
                item, runningTotal);;
    }
}
