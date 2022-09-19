// fig08_05.cpp
// Printing string characteristics
#include <fmt/format.h>
#include <iostream>
#include <string>

// Display string statistics
void printStatistics(const std::string& s) {
    std::cout << fmt::format(
        "capacity: {}\nmax size: {}\nsize: {}\nempty: {}",
        s.capacity(), s.max_size(), s.size(), s.empty());
}

int main() {
    std::string string1; // empty strin

    std::cout << "Statistics before input:\n";
    printStatistics(string1);

    std::cout << "\n\nEnter a string: ";
    std::cin >> string1; // delimited by whitespace
    std::cout << fmt::format("The string entered was: {}\n", string1);
    std::cout << "Statistics after input:\n";
    printStatistics(string1);

    std::cout << "\n\nEnter a string: ";
    std::cin >> string1; // delimited by whitespace
    std::cout << fmt::format("The string entered was: {}\n", string1);
    std::cout << "Statistics after input:\n";
    printStatistics(string1);

    // append 46 characters to string1
    string1 += "1234567890abcdefghijklmnopqrstuvwxyz1234567890";
    std::cout << fmt::format("\n\nstring1 is now: {}\n", string1);
    std::cout << "Statistics after concatenation:\n";
    printStatistics(string1);

    string1.resize(string1.size() + 10);
    std::cout << "\n\nStatistics after resizing to add 10 characters:\n";
    printStatistics(string1);
    std::cout << '\n';
}