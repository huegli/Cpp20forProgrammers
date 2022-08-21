// fig07_10.cpp
// Sizeof operator when used on a built-in array's name
// returns the number of bytes in the built-in array
#include <fmt/format.h>
#include <iostream>

size_t getSize(double* ptr); // prototype

int main() {
    double numbers[20]; // 20 doubles; occupies 160 bytes on our system

    std::cout << fmt::format("Number of bytes in numbers is {}\n\n",
            sizeof(numbers));

    std::cout << fmt::format("Number of bytes returned by getSize is {}\n",
            getSize(numbers));
}

// return size of ptr
size_t getSize(double* ptr) {
    return sizeof(ptr);
}
