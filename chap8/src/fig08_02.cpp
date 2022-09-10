// fig08_02c.pp
// Comparing strings
#include <fmt/format.h>
#include <iostream>
#include <string>

void displayResult(const std::string& s, int result) {
    if (result == 0) {
        std::cout << fmt::format("{} == 0\n", s);
    }
    else if (result > 0) {
        std::cout << fmt::format("{} > 0\n", s);
    }
    else { // < 0
        std::cout << fmt::format("{} < 0\n", s);
    }
}

int main () {
    const std::string s1{"Testing the comparison functions."};
    const std::string s2{"Hello"};
    const std::string s3{"stinger"};
    const std::string s4{s2}; // "Hello"

    std::cout << fmt::format("s1: {}\ns2: {}\ns3: {}\ns4: {}",
        s1, s2, s3, s4);
}
