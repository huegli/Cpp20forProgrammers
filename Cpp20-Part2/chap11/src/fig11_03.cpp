// fig11_03.cpp
// MyArray class test program
#include <fmt/format.h>
#include <iostream>
#include <stdexcept>
#include <utility>
#include "MyArray.h"

// function to return a MyArray by value
MyArray getArrayByValue() {
    MyArray localInts{10, 20, 30}; // create three-element getArrayByValue
    return localInts; // return by value creates an rvalue
}

int main() {
    MyArray ints1(7); // 7-element MyArray: note () rather than {}
    MyArray ints2(10); // 10-element MyArray: note () rather than {}

    // print inst1 size and contents
    std::cout << fmt::format("\nints1 size: {}\ncontents: ", ints1.size())
        << ints1; // use overloaded <<

    // print inst2 size and contents
    std::cout << fmt::format("\nints2 size: {}\ncontents: ", ints2.size())
        << ints2; // use overloaded <<

    // input and print ints1 and ints2
    std::cout << "\n\nEnter 17 integers: ";
    std::cin >> ints1 >> ints2; // uses overloaded >>

    std::cout << "\nints1: " << ints1 << "\nints2: " << ints2;

    // use overloaded inequality (!=) operator
    std::cout << "\n\nEvaluating: ints1 != ints2\n";

    if (ints1 != ints2) {
        std::cout << "ints1 and ints2 are not equal\n\n";
    }

    // create MyArray insts3 by copying ints1
    MyArray ints3{ints1}; // invokes copy constructor
    
    // print ints3 size and contents
    std::cout << fmt::format("\nints3 size: {}\ncontents: ", ints3.size())
        << ints3;

    // use overloaded copy assignment (=) operator
    std::cout << "\n\nAssigning ints2 to ints1:\n";
    ints1 = ints2; // note target MyArray is smaller

    std::cout << "\nints1: " << ints1 << "\nints2: " << ints2;

    // use overloaded equality (==) operator
    std::cout << "\n\nEvaluating: ints1 == ints2\n";
    
    if (ints1 == ints2) {
        std::cout << "ints1 and ints2 are equal\n\n";
    }

    // use overloaded subscript operator to create an rvalue
    std::cout << fmt::format("ints1[5] is {}\n\n", ints1[5]);

    // use overloaded subscript operator to create an lvalue
    std::cout << "Assigning 1000 to ints1[5]\n";
    ints1[5] = 1000;
    std::cout << "ints1: " << ints1;

    // attempt to use out-of-range subscript
    try {
        std::cout << "\n\nAttempt to assign 1000 to inst1[15]\n";
        ints1[15] = 1000; // ERROR: subscript out of range
    }
    catch (const std::out_of_range& ex) {
        std::cout << fmt::format("An exception occurred: {}\n", ex.what());
    }
}

