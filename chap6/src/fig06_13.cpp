// fig06_13.cpp
// Functional-style programming with C++20 ranges and views.
#include <array>
#include <fmt/format.h>
#include <iostream>
#include <numeric>
#include <ranges>

int main() {
    // lambda to display results of range operations
    auto showValues{
        [](auto& values, const std::string& message) {
            std::cout << fmt::format("{}: ", message);

            for (const auto& value : values) {
                std::cout << fmt::format("{} ", value);
            }

            std::cout << '\n';
        }
    };

    auto values1{std::views::iota(1, 11)}; // generate integers 1-10
    showValues(values1, "Generate integers 1-10");

}


