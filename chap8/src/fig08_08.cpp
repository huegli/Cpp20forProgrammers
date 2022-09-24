// fig08_08.cpp
// Demonstrating std::string insert member functions.
#include <fmt/format.h>
#include <iostream>
#include <string>

int main() {
    std::string s1{"beginning end"};
    std::string s2{"12345678"};

    std::cout << fmt::format("Initial strings:\ns1: {}\ns2: {}\n\n",
            s1, s2);

    s1.insert(10, "middle "); // insert "middle " at location 10
    s2.insert(3, "xx", 0, std::string::npos); // insert "xx" at location 3

    std::cout << fmt::format("Strings after insert:\ns1: {}\ns2: {}\n\n",
            s1, s2);

}
