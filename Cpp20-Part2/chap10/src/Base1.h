// Fig. 10.41: Base1.h
// Definition of class Base1
#pragma once

// class Base1 definition
class Base1 {
public:
    explicit Base1(int value) : m_value{value} {}
    int getData() const {return m_value;}
private:
    int m_value;
};
