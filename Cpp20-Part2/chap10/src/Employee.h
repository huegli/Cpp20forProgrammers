// Fig. 10.11: Employee.h
// Employee abstract base class.
#pragma once
#include <string>
#include <string_view>

class Employee {
public:
    explicit Employee(std::string_view name);
    virtual ~Employee() = default;

    void setName(std::string_view name);
    std::string getName() const;

    // pure virtual function makes Emploee an abstract base class
    virtual double earnings() const = 0; // pure virtual
    virtual std::string toString() const; // virtual
private:
    std::string m_name;
};
