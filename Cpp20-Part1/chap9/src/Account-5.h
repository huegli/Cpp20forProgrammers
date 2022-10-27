// Fig 9.5: Account.h
// Account class with a name and m_balance data members, and a
// constructor and deposit functio that each perform validation
#include <algorithm>
#include <string>
#include <string_view>

class Account {
public:
    // Account constructor with two parameters
    Account(std::string_view name, double balance)
    : m_name{name}, m_balance{std::max(0.0, balance)} { // member init
        // empty body
    }

    // function that deposits (adds) only a valid amount to the balance
    void deposit(double amount) {
        if (amount > 0.0) { // if the amount is valid
            m_balance += amount; // add it to m_balance
        }
    }

    // function that returs the account balance
    double getBalance() const {
        return m_balance;
    }

    // function that sets the account name
    void setName(std::string_view name) {
        m_name = name; // replace m_name's value with name
    }

    // function that returns the account name
    const std::string& getName() const {
        return m_name;
    }

private:
    std::string m_name;
    double m_balance;
}; // end class Account
