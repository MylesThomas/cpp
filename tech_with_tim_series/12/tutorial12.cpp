#include <iostream>
#include <string>

int main() {
    int x = 69;
    switch(x) {
        std::cout << x << std::endl;
        case 1:
            std::cout << "x is 1";
            break;
        case 2:
            std::cout << "x is 2";
            break;
        case 10:
            std::cout << "x is 10";
            break;

        // default ie. 'else'
        default:
            std::cout << "x is not 1, 2, or 10." << std::endl;
            std::cout << "x is actually ..." << std::endl;
            std::cout << x;
    }
} 
// x is not 1, 2, or 10.
// x is actually ...
// 69
