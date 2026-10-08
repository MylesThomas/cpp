#include <iostream>
#include <string>

int main() {
    int a = 2;
    int b = a;
    int &c = a;

    std::cout << &a << std::endl; // 0x61ff08
    std::cout << &b << std::endl; // 0x61ff04 (different because accessing different place in memory)
    std::cout << &c << std::endl; // 0x61ff08
} 
