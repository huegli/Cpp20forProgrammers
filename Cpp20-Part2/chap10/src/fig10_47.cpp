// fig10_47.cpp
// Using virtual base classes
#include <iostream>

// class Base definition
class Base {
public:
    virtual void print() const = 0; // pure virtual
};

// class DerivedOne definition
class DerivedOne : virtual public Base {
public:
    // override print function
    void print() const override {std::cout << "DerivedOne\n";}
};

// class DerivedTwo definition
class DerivedTwo : virtual public Base {
public:
    // overrid print function
    void print() const override {std::cout << "DerivedTwo\n";}
};

// class Multiple definition
class Multiple : public DerivedOne, public DerivedTwo {
public:
    // qualify which version of function print
    void print () const override {DerivedTwo::print();}
};

int main() {
    Multiple both{}; // instantiate a Multiple object
    DerivedOne one{}; // instantiate a DerivedOne object
    DerivedTwo two{}; // instantiate a DerivedTwo object
    Base* array[3]{}; // create array of base-class pointers

    array[0] = &both; // ERROR--ambiguous
    array[1] = &one;
    array[2] = &two;

    // polymorphically invoke print
    for (int i{0}; i < 3; ++i) {
        array[i]->print();
    }
}
