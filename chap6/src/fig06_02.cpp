// fig06_02.cpp
// Initializing an array in a declaration
#include <iostream>
#include <iomanip>
#include <array>

int main() {
   std::array<int, 5> values{32, 27, 64, 18, 95}; // braced initialization
 
   // output each array element's value
   for (size_t i{0}; i < values.size(); ++i) {
      std::cout << values.at(i) << "  " << std::endl;
   }

   std::cout << "\n\n";

   // using class template argument to determine values2's type
   std::array values2{1.1, 2.2, 3.3, 4.4};

   // output each array element's value
   for (size_t i{0}; i < values2.size(); ++i) {
      std::cout << values2.at(i) << "  " << std::endl;
   }

   std::cout << "\n";
}
