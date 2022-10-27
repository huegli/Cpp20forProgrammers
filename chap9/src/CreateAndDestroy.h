// Fig. 9.13: CreateAndDestroy.h
// CreateAndDestroy class definition
// Member functions defined in CreateAndDestroy.cpp.
#pragma once 
#include <string>
#include <string_view>

class CreateAndDestroy {
public:
    CreateAndDestroy(int ID, std::string_view message); 
    ~CreateAndDestroy(); 
private:
    int m_ID;
    std::string m_message;
};

