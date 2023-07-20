#include <iostream>
int main() {
    int x = 0;
    int y = 2;
    bool test = (x < y) || (y == x);
    std::cout << test << std::endl; // 1 = TRUE
} 