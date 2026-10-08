#include <iostream>
#include <string>
#include <set>

using namespace std;

void printInt(int x) {
    cout << x << endl;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}



int main() {
    int a = 2;
    int b = 4;

    printInt(a);
    printInt(b);

    cout << "Swapping ... " << endl;
    swap(&a, &b);
    printInt(a);
    printInt(b);
} 
