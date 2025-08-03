#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("Program List 8085.txt-Circulate");  // Open the file
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::cout << line << std::endl;  // Print each line
        }
        file.close();
    } else {
        std::cerr << "Unable to open file!" << std::endl;
    }

    return 0;
}