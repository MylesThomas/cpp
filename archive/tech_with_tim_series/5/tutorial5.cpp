#include <iostream>

int main() {
    const int a_int = 10;
    const int b_int = 3;
    int answer_int = a_int / b_int;
    std::cout << "Answer (int): " << answer_int << std::endl;

    const float a_float = 10.0;
    const float b_float = 3.0;
    float answer_float = a_float / b_float;
    std::cout << "Answer (float): " << answer_float << std::endl;

    return 0;
}