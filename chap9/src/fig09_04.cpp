// Fig. 9.4: AccountTest.cpp
// Creating and manipulating an Account objects
#include <fmt/format.h>
#include <iostream>
#include <string>
#include "Account-3.h"
#include "fmt/core.h"

int main() {
    // create two Account objects
    Account account1{"Jane Green"};
    Account account2{"John Blue"};

    // display each accounts corresponding name
    std::cout <<  fmt::format(
            "account1 name is: {}\naccount2 name is: {}\n",
            account1.getName(), account2.getName());
}
