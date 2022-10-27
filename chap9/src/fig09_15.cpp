// fig09_15.cpp
// Order in which constructors and
// descructors are called.
#include <iostream>
#include "CreateAndDestroy.h"

void create();

const CreateAndDestroy first{1, "(global before main)"};

int main() {
    std::cout << "\nMAIN FUNCTION: EXECUTION BEGINS\n";
    const CreateAndDestroy second{2, "(local in main)"};
    static const CreateAndDestroy third{3, "(local static in main)"};

    create(); // call function to create objects

    std::cout << "\nMAIN FUNCTION EXECUTION RESUMES\n";
    const CreateAndDestroy fourth{4, "(local in main)"};
    std::cout << "\nMAIN FUNCTION: EXECUTION ENDS\n";
}

// Function to create objects
void create() {
    std::cout << "\nCREATE FUNCTION: EXECUTION BEGINS\n";
    const CreateAndDestroy fifth{5, "(local in create)"};
    static const CreateAndDestroy sixth{6, "(local static in create)"};
    const CreateAndDestroy seventh{7, "(local in create)"};
    std::cout << "\nCREATE FUNCTION: EXECUTION ENDS\n";
}
