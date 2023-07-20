#include <iostream>
int main () 
{
    int num1, num2;
    std::cout << "Type number 1: " << std::endl;
    std::cin >> num1;
    std::cout << "Type number 2: " << std::endl;
    std::cin >> num2;

    std::cout << "There two numbers are the same: " << (num1==num2) << std::endl;
}