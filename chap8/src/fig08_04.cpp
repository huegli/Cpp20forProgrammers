// fig08_04.cpp
// Using the swap function to swap two string
#include <fmt/format.h>
#include <iostream>
#include <string>

int main() {
    std::string s1{ "one" };
    std::string s2{ "two" };

    std::cout << fmt::format("Before swap:\ns1: {}; s2: {}", s1, s2);
    s1.swap(s2); // swap strings
    std::cout << fmt::format("\n\nAfter swap:\ns1: {}; s2: {}", s1, s2);
}