// Fig. 9.33: Employee.h
// Employee class definition with a static data member to
// track the number of Employee objects in memory
#pragma once
#include <string>
#include <string_view>

class Employee {
public:
    Employee(std::string_view firstName, std::string_view lastName);
    ~Employee(); 
    const std::string& getFirstName() const;
    const std::string& getLastName() const;

    // static member function
    static int getCount(); // return # of objects instantiated
private:
    std::string m_firstName;
    std::string m_lastName;

    // static data
    inline static int m_count{0}; // number of objects instantiated
};
