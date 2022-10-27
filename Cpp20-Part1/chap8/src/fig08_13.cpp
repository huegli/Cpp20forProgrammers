// fig08_13.cpp
// Demonstrating input from an istringstream object
#include <fmt/format.h>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    const std::string inputString{"Amanda test 123 4.7 A"};
    std::istringstream input{inputString};
    std::string s1;
    std::string s2;
    int i;
    double d;
    char c;

    input >> s1 >> s2 >> i >> d >> c;

    std::cout << "Items extracted from the istringstream object:\n"
        << fmt::format("{}\n{}\n{}\n{}\n{}\n", s1, s2, i, d, c);

    // attempt to read from empty stream
    if (long value; input >> value) {
        std::cout << fmt::format("\nlong value is: {}\n", value);
    }
    else {
        std::cout << fmt::format("\ninput is empty\n");
    }
}
