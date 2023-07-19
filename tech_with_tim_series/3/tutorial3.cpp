#include <iostream>
#include <string>

int main() {
    std::cout << "Start of main." << std::endl;

    int val = 2.7;
    // c++ tries to convert this to an int (2 since decimal is chopped off)
    // if it cannot, error is thrown
    std::cout << val << std::endl;

    // init a var
    int x, y;
    x = 7;
    y = 9;
    x = 69;
    std::cout << x << " " << y << std::endl;
    x = y;
    std::cout << x << std::endl;

    //redefining a type
    // int x2; cannot do this...
    std::string x2;
    x2 = "Myles!!!";
    std::cout << x2 << std::endl;
}

// int 7, -9
// float 7.0, -9.8
// bool true, false
// string ""
// char 'x' '0'