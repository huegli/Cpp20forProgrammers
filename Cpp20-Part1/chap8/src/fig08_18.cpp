// fig08_18.cpp
// Matching patters throughout a string
#include <fmt/format.h>
#include <iostream>
#include <regex>
#include <string>

int main() {
    // performing a simple match
    std::string s1{ "Programming is fun" };
    std::cout << fmt::format("s1: {}\n\n", s1);
    std::cout << "Search anywhere is s1:\n"
        << fmt::format("Programming: {}; fun: {}; fn: {}\n\n",
            std::regex_search(s1, std::regex{ "Programming" }),
            std::regex_search(s1, std::regex{ "fun" }),
            std::regex_search(s1, std::regex{ "fn" }));

    // ignoring case
    std::string s2{"SAM WHITE"};
    std::smatch match; // store the text that matches the pattern
    std::cout << fmt::format("s2: {}\n\n", s2);
    std::cout << "Case insensitive search for Sam in s2:\n"
        << fmt::format("Sam: {}\n", std::regex_search(s2, match,
                    std::regex{"Sam", std::regex_constants::icase}))
        << fmt::format("Matched text: {}\n\n", match.str());

    // finding all matches
    std::string contact{
        "Wally White, Home: 555-555-1234, Work: 555-555-4321"};
    std::regex phone{R"(\d{3}-\d{3}-\d{4})"};

    std::cout << fmt::format("Finding phone numbers in:\n{}\n", contact);
    while (std::regex_search(contact, match, phone)) {
        std::cout << fmt::format("    {}\n", match.str());
        contact = match.suffix();
    }
}
