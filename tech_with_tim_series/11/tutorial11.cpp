#include <iostream>
#include <string>

int main() {
    int x = 10;

    do {
        int add;
        std::cout << "Type the number to add to x: ";
        std::cin >> add;
        x += add;
        std::cout << "x is: " << x << std::endl;
    }
    while (x < 10);
}