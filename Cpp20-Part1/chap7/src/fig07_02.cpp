// fig07_02.cpp
// Pass-by-value used to cube a variable's value
#include <fmt/format.h>
#include <iostream>

int cubeByValue(int n); // prototype

int main() {
    int number{5};

    std::cout << fmt::format("Original value of number is {}\n", number);
    number = cubeByValue(number);
    std::cout << fmt::format("New value of number is {}\n", number);
}

// calculate and returen cube of integer argument
int cubeByValue(int n) {
    return n * n * n; // cube local variable n and return result
}
