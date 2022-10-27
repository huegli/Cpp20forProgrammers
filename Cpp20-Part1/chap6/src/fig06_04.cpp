// fig06_04.cpp
// Set array values to the even integers from 2 to 10.
#include <fmt/format.h>
#include <iostream>
#include <array>

int main() {
    // constant can be used to specify array size
    constexpr size_t arraySize{5}; // must initialize in declaration

    std::array<int, arraySize> values{}; // array values has 5 elements

    for (size_t i{0}; i < values.size(); ++i) { // set values
        values.at(i) = 2 + 2 * i;
    }

    // output contents of array values in tabular format
    for (const int& value : values) {
        std::cout << fmt::format("{}  ", value);
    }

    std::cout << "\n";
}
