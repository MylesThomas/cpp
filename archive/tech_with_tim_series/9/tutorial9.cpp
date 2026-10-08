#include <iostream>
#include <string>
int main() {
    int x = 5;
    int arr[] {4,5,6,7777777};
    std::string arr2[] {"myles", "thomas"};
    float arr3[] {1.1, 2.3};
    std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl; // 4
} 