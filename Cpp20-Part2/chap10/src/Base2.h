// Fig. 10.42: Base2.h
// Definition of class Base2
#pragma once

// class Base2 definition
class Base2 {
public:
    explicit Base2(char letter) : m_letter{letter} {}
    char getData() const {return m_letter;}
private:
    char m_letter;
};
