// Fig 9.6: AccountTest.cpp
// Displaying and updating Account balances
#include <fmt/format.h>
#include <iostream>
#include "Account-5.h"

int main() {
    Account account1{"Jane Green", 50.00};
    Account account2{"John Blue", -7.00};

    // display initial balances of each Object
    std::cout << fmt::format("account1: {} balance is ${:2f}\n",
        account1.getName(), account1.getBalance());
    std::cout << fmt::format("account2: {} balance is ${:2f}\n",
        account2.getName(), account2.getBalance());

    std::cout << "Enter deposit amount for account1: "; // prompt
    double amount;
    std::cin >> amount; // obtain amount
    std::cout << fmt::format(
        "adding ${:.2f} to account1 balance\n\n", amount);
    account1.deposit(amount);

    // display balances
    std::cout << fmt::format("account1: {} balance is {:.2f}\n",
        account1.getName(), account1.getBalance());
    std::cout << fmt::format("account2: {} balance is {:.2f}\n\n",
        account2.getName(), account2.getBalance());

    std::cout << "Enter deposit amount for account2: "; // prompt
    std::cin >> amount; // obtain user input
    std::cout << fmt::format(
        "adding ${:.2f} to account2 balance\n\n", amount);
    account2.deposit(amount);

    // display balances
    std::cout << fmt::format("account1: {} balance is {:.2f}\n",
        account1.getName(), account1.getBalance());
    std::cout << fmt::format("account2: {} balance is {:.2f}\n\n",
        account2.getName(), account2.getBalance());
}
