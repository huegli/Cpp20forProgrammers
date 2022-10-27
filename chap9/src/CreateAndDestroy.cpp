// Fig. 9.14: CreateAndDestroy.cpp
// CreateAndDestroy class member-function definitions.
#include <fmt/format.h>
#include <iostream>
#include "CreateAndDestroy.h"

// constructor sets object's ID number and descriptive message
CreateAndDestroy::CreateAndDestroy(int ID, std::string_view message)
    : m_ID{ID}, m_message{message} {
        std::cout << fmt::format("Object {} constructor runs {}\n",
                m_ID, m_message);
    }

// destructor
CreateAndDestroy::~CreateAndDestroy() {
    // output newline for certain objects; helps readability
    std::cout << fmt::format("{}Object {} destructor runs {}\n",
            (m_ID == 1 || m_ID == 6 ? "\n" : ""), m_ID, m_message);
}
