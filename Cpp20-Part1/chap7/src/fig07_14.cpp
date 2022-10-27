// fig07_14.cpp
// C++20: Creating std::arrays from string literals with to_array
#include <fmt/format.h>
#include <iostream>
#include <array>

int main() {
    // lambda to display a collection of items
    const auto display {
        [](const auto& items) {
            for (const auto& item : items) {
                std::cout << fmt::format("{} ", item);
            }
        }
    };

    // initializing an array with a string literal
    // creates a one-element array<const char*>
    const auto array1{std::array{"abc"}};
    std::cout << fmt::format("array1.size() = {}\narray1: ",
            array1.size());
    display(array1); // use lambda to display contents
    
    // creating std::array of characters from a string literal
    const auto array2{std::to_array("C++20")};
    std::cout << fmt::format("\narray2.size() = {}\narray2: ",
            array2.size());
    display(array2); // use lambda to display contents

    std::cout << "\n";
}

