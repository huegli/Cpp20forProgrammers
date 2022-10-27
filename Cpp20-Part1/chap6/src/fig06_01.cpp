// Initializing an array's elements to zeros and printing the array.
#include <cstddef>
#include <iostream>
#include <iomanip>
#include <array>

int main() {
    std::array<int, 5> values; // values is an array of 5 int values
    
    // initialize elements of array values to 0
    for (size_t i{0}; i < values.size(); ++i) {
       values[i] = 0; // set element at location i to 0
    }

    std::cout << std::right;
    std::cout << std::setw(7) << "Element" << std::setw(10) << "Value" << std::endl;

    // output each array element's value
    for (size_t i{0}; i < values.size(); ++i) {
       std::cout << std::setw(7) << i << std::setw(10) << values[i] << std::endl;
    }

    std::cout << std::setw(7) << "Element" << std::setw(10) << "Value" << std::endl;

    // access elements via the at member function
    for (size_t i{0}; i < values.size(); ++i) {
       std::cout << std::setw(7) << i << std::setw(10) << values.at(i) << std::endl;
    }

    // accessing an element outside the array's bounds with at
    // values.at(10); // throws an exception
    values.at(4); // this is fine

}

