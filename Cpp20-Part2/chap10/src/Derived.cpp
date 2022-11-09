// Fig. 10.44: Derived.cpp
// Member-function definitions for class Derived
#include <fmt/core.h>
#include <fmt/format.h>
#include <string>
#include "Derived.h"

// constructor for Derived calls Base1 and Base2 constructors
Derived::Derived(int value, char letter, double real) 
    : Base1{value}, Base2{letter}, m_real{real} {}

// return real
double Derived::getReal() const {return m_real;}

// display all data members of Derived
std::string Derived::toString() const {
    return fmt::format("int: {}; char: {}: double: {}",
            Base1::getData(), Base2::getData(), getReal());
}
