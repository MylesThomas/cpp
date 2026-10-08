#include <iostream>
#include <string>

int main() {
    int x[] = {1,2,3};
    int *head = x; // gives location to first in array

    // loop through array (by changing head)
    for (int i = 0; i < 3; i++) {
        head = x + i;
        std::cout << head << std::endl; // memory address
        std::cout << *head << std::endl; // the value that the memory points to 
        
    }
} 
