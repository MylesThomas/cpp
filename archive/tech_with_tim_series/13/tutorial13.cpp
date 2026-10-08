#include <iostream>
#include <string>

int main() {
    std::string str = "hello world!";
    std::cout << str.size() << std::endl;
    std::cout << str.length() << std::endl; // gets the same thing
    
    for (int i = 0; i < str.length(); i++) {
        char chr = str[i];
        std::cout << chr << std::endl;
    }
} 
