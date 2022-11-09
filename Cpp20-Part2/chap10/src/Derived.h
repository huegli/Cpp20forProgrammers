// Fig. 10.42: Derived.h
// Definition of class Derived which inherits
// multiple base classes (Base1 and Base2).
#pragma once
#include <iostream>
#include <string>
#include "Base1.h"
#include "Base2.h"

// class Derived definition
class Derived : public Base1, public Base2 {
public:
    Derived(int value, char letter, double real);
    double getReal() const;
    std::string toString() const;
private:
    double m_real; // derived class's private data
};
