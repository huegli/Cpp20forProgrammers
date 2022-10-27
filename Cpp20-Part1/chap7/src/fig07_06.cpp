// fig07_06.cpp
// C++20: Creating std::arrays with to_array
#include <fmt/format.h>
#include <iostream>
#include <array>

int main() {
    // generic lambda to display a collection of items
    const auto display{
        [](const auto& items) {
            for (const auto& item : items) {
                std::cout << fmt::format("{} ", item);
            }
        }
    };

    const int values1[]{10, 20, 30};

    // creating a std::array from a built-in array
    const auto array1{std::to_array(values1)};

    std::cout << fmt::format("array1.size() = {}\n", array1.size())
              << "array1: ";
    display(array1); // use lambda to display contents

    // creating a std::array from an initializer list
    const auto array2{std::to_array({1, 2, 3, 4})};
    std::cout << fmt::format("\n\narray2.size() = {}\n", array2.size())
              << "array2: ";
    display(array2); // use lambda to display contents

    std::cout << '\n';


}
