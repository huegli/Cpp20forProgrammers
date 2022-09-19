// fig08_03.cpp
// Demonstrating string member function substr
#include <iostream>
#include <string>

int main() {
    const std::string s{ "airplane" };
    std::cout << s.substr(3, 4) << '\n'; // retreive substring "plan"
}