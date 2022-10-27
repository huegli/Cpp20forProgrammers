// fig08_17.cpp
// Regular expression replacements
#include <fmt/format.h>
#include <iostream>
#include <regex>
#include <string>

int main() {
    // replace tabs with commas
    std::string s1{ "1\t2\t3\t4" };
    std::cout << fmt::format("Original string: {}\n", R"(1\t2\t3\t4)")
        << fmt::format("After replacing tabs with commas: {}\n",
            std::regex_replace(s1, std::regex{"\t"}, ","));
}