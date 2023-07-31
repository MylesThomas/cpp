#include <iostream>
#include <string>

int main() {
    int x [5];

    // fill array with elements
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        x[i] = i;
    }
    // print to console
    for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++) {
        std::cout << x[i] << std::endl;
    }
}