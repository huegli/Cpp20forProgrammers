// Fig. 9.1: AccountTest.cpp
// Creating and manipulating an Account objects
#include <fmt/format.h>
#include <iostream>
#include <string>
#include "Account-2.h"

int main() {
    Account myAccount{};  // Create Account object myAccount

    // show that the initial avlue of myAccount's name is the empty string
    std::cout << fmt::format("Initial account name: {}\n", 
            myAccount.getName());

    // prompt for and read the name
    std::cout << "Enter the account name: ";
    std::string name;
    std::getline(std::cin, name); // read a line of text
    myAccount.setName(name); // set the name in the myAccount object

    // display the name stored in the myAccount object
    std::cout << fmt::format("Updated account name: {}\n", 
            myAccount.getName());
}
