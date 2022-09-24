// fig08_07.cpp
// Demonstrating string member functions erase and replace
#include <fmt/format.h>
#include <iostream>
#include <string>

int main() {
    // compiler concatenates all parts into one string
    std::string string1{"The values in any left subtree"
        "\nare less than the value in the"
        "\nparent node and the values in"
        "\nany right subtree are greater"
        "\nthan the value in the parent node"};


    std::cout << fmt::format("Original string:\n{}\n\n", string1);
    string1.erase(62); // remove from index 62 through end of file
    std::cout << fmt::format("string1 after erase:\n{}\n\n", string1);

    size_t position(string1.find(" ")); //find first space
    
    // replace all spaces with period
    while (position != std::string::npos) {
        string1.replace(position, 1, ".");
        position = string1.find(" ", position + 1);
    }

    std::cout << fmt::format("After first replacement:\n{}\n\n", string1);

    position = string1.find("."); // find first period

    // replace all periods with two semicolons
    // NOTE: this will overwrite characters
    while (position != std::string::npos) {
        string1.replace(position, 2, "xxxxx::yyy", 5, 2 );
        position = string1.find(".", position + 2);
    }

    std::cout << fmt::format("After second replacement:\n{}\n", string1);


}
