#include <iostream>
int main() {
    int x;
    std::cin >> x;
    if (x > 10) {
        std::cout << "x is larger than 10";
    } else if (x >= 5) {
        std::cout << "x is between 5 and 10";
    }
} 