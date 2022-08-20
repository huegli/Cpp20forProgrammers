// fig06_12.cpp
// Compute the product of an array's elements using accumulate
#include <array>
#include <fmt/format.h>
#include <iostream>
#include <numeric>

int multiply(int x, int y) {
    return x * y;
}

int main() {
    constexpr std::array integers{1, 2, 3, 4, 5};

    std::cout << fmt::format("Product of integers: {}\n",
            std::accumulate(std::begin(integers), std::end(integers), 1, multiply));

    std::cout << fmt::format("Product of integers with a lambda: {}\n",
            std::accumulate(std::begin(integers), std::end(integers), 1,
                [](const auto& x, const auto& y){return x * y;}));
}

