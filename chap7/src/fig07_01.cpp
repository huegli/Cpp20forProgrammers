// fig07_01.cpp
// Pointer operators & and *.
#include <iostream>

int main() {
    constexpr int a{7}; // initialize a with 7
    const int* aPtr{&a}; // initialize aPtr with address of int variable a

    std::cout  << "The address of a is " << &a
        << "\nThe value of aPtr is " << aPtr;
    std::cout << "\n\nThe value of a is " << a
        << "\nThe value of *aPtr is " << *aPtr << '\n';
}
