// fig07_09.cpp
// Attempting to modify a constant pointer to constant data
#include <iostream>

int main() {
    int x{5};
    int y{6};

    // ptr is a constant pointer to a constant integer
    // ptr always points to the same location: the integer
    // at that location cannot be modified.
    const int* const ptr{&x};

    std::cout << *ptr << '\n';

    *ptr = 7; // allowed: *ptre is not const
    ptr = &y; // error: ptr is const: cannot assign to it a new address
}
