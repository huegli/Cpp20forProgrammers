// fig06_07.cpp
// Die-rolling program using an array instead of switch.
#include <fmt/format.h>
#include <iostream>
#include <array>
#include <random>

int main () {
    // set up random-number generation
    std::random_device rd; // used to seed the default_random engine
    std::default_random_engine engine{rd()}; // rd() produces a seed
    std::uniform_int_distribution randomDie{1, 6};

    constexpr size_t arraySize{7}; // ignore element zero
    std::array<int, arraySize> frequency{}; // initialize to 0s

    // roll die 60,000,000 times: use die value as frequency index
    for (int roll{1}; roll <= 60'000'000; ++roll) {
        ++frequency.at(randomDie(engine));
    }

    std::cout << fmt::format("{}{:>13}\n", "Face", "Frequency");

    // output each array element's value
    for (size_t face{1}; face < frequency.size(); ++ face) {
        std::cout << fmt::format("{:>4}{:>13}\n", face, frequency.at(face));
    }
}
