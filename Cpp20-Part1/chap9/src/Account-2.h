// Fig 9.2: Account.h
// Account class with a data member and
// member functions to set and get its value
#include <string>
#include <string_view>

class Account {
public:
    // member function that sets m_name in the object
    void setName(std::string_view name) {
        m_name = name; // replace m_name's value with name
    }

    // member function that retrieves the account name from the object
    const std::string& getName() const {
        return m_name; // return m_name's value to this function's caller
    }
private:
    std::string m_name; // data member containing account holder's name
}; // end class Account
