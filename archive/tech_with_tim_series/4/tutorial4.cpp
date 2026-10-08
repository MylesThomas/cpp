#include <iostream>
#include <string>

int main() {
    int num1, num2;
    std::cout << "Enter a number: ";
    std::cin >> num1;

    // Handle error
    std::cin.clear();
    std::cin.ignore(1000, '\n'); // errors become 0

    std::cout << "Enter a 2nd number: ";
    std::cin >> num2;

    const int sum = num1 + num2;
    std::cout << "The sum is: " << sum << std::endl;

    return 0;
}