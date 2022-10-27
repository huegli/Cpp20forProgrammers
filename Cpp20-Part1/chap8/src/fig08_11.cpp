// fig08_11.cpp
// Reading and printing a sequential file
#include <cstdlib>
#include <fmt/format.h>
#include <fstream>
#include <iostream>
#include <string>

int main() {
    // ifstream opens the file
    if (std::ifstream input{"clients.txt", std::ios::in}) {
        std::cout << fmt::format("{:<10}{:<13}{:>7}\n",
            "Account", "Name", "Balance");

        int account;
        std::string name;
        double balance;

        // display each record in file
        while (input >> account >> name >> balance) {
            std::cout << fmt::format("{:<10}{:<13}{:>7.2f}\n",
                account, name, balance);
        }
    }
    else {
        std::cerr << "File could not be opened\n";
        std::exit(EXIT_FAILURE);
    }
}
