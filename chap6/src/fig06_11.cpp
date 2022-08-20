// fig06_11.cpp
// Compute the sum of the elements of an array using accumulate
#include <array>
#include <fmt/format.h>
#include <iostream>
#include <numeric>

int main() {
    constexpr std::array integers {10, 20, 30, 40};
    std::cout << fmt::format("Total of array elements: {}\n",
            std::accumulate(std::begin(integers), std::end(integers), 0));
}

