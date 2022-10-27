// fig07_03.cpp
// Pass-by-reference with a pointe argument used to cube a
// variable's value
#include <fmt/format.h>
#include <iostream>

int cubeByReference(int* nPtr); // prototype

int main() {
    int number{5};

    std::cout << fmt::format("Original value of number is {}\n", number);
    number = cubeByReference(&number); // pass number address to cubeByReference
    std::cout << fmt::format("New value of number is {}\n", number);
}

// calculate and returen cube of integer argument
int cubeByReference(int* nPtr) {
    return *nPtr * *nPtr * *nPtr; // cube *nPtr
}
