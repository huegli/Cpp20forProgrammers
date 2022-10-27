// fig09_29.cpp
// Using the this pointer to refer to object members.
#include <fmt/format.h>
#include <iostream>

class Test {
public:
    explicit Test(int value);
    void print() const;
private:
    int m_x{ 0 };
};

// constructor
Test::Test(int value) : m_x{ value } {} // initialize m_x to value

// print m_x using implicit then explicit this pointers;
// the parentheses around *this are required to precedence
void Test::print() const {
    // implicitly use the this pointer to acces the member m_x
    std::cout << fmt::format("        m_x = {}\n", m_x);

    // explicitly use the this pointe and the arrow operator
    // to access the member m_x
    std::cout << fmt::format("  this->m_x = {}\n", this->m_x);

    // explicitly use the dereferenced this pointer and
    // the dot operator to access the member m_x
    std::cout << fmt::format("(*this).m_x = {}\n", (*this).m_x);
}

int main() {
    const Test testObject{ 12 };
    testObject.print();
}
