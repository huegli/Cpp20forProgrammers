// Fig. 10.19 Employee.h
// Employee abstract base class.
#pragma once
#include <string>
#include <string_view>

class Employee {
public:
    Employee(std::string_view name);
    virtual ~Employee() = default;

    void setName(std::string_view name);
    std::string getName() const;

    double earnings() const;    // not virtual
    std::string toString() const; // not virtual
protected:
    virtual std::string getString() const; // virtual
private:
    std::string m_name;
    virtual double getPay() const = 0; // pure virtual
};
