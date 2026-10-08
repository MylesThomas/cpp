// C++ program to  iterated thorough
// all values. I equals number
// of values in tuple
#include <iostream>
#include <string>
#include <tuple>
 
using namespace std;


int main() {
    // declare these 2 tuples (normal)
    tuple <int, char> t1(20, 'A');
    tuple <char, string> t2('B', "Hello World!");
    
    // make sure to declare types of variables, even for the cat!
    // if you do not declare, then use 'auto'
    
    // tuple <int, char, char, string> t3 = tuple_cat(t1, t2);
    auto t3 = tuple_cat(t1, t2);
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    cout << get<2>(t3) << endl;
    cout << get<3>(t3) << endl; 
}

