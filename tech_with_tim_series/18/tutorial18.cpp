#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<int> v1 = {1,2,3};
    cout << v1.size() << endl; // 3
    cout << v1.capacity() << endl; // 4

    v1.push_back(4);
    cout << v1.size() << endl; // 4
    cout << v1.capacity() << endl; // 6

    v1.push_back(5);
    cout << v1.size() << endl; // 5
    cout << v1.capacity() << endl; // 6
 
    // pop from back
    // - returns the last element AND removes it
    // - note: capacity does not go back down, even if you pop all the values off
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back();
    v1.pop_back(); // pop all 5 values off

    cout << v1.size() << endl; // 0
    cout << v1.capacity() << endl; // 6 (same as before)

    // decrease capacity of vector with .shrink_to_fit()
    // - do this when you don't need space anymore
    v1.push_back(1);
    v1.shrink_to_fit();
    cout << v1.size() << endl; // 1
    cout << v1.capacity() << endl; // 1 (smaller than before)

    // insert and erase elements (not intuitive!)
    // - insert
    cout << "\nbeginning with v...\n" << endl;
    vector<int> v = {1,2,3,4};

    int x = 25;
    v.insert(v.begin() + 1, x); // insert at position 1
    cout << v[1] << endl; // 25

    int y = 10000;
    v.insert(v.begin() + 0, y); // insert at position 0
    cout << v[0] << endl; // 10000

    // - erase
    v.erase(v.begin() + 0); // erase the element at position 0
    cout << v[0] << endl; // 1 (the value that was there initially)
    v.erase(v.begin() + 1); // erase the element at position 1
    cout << v[1] << endl; // 2 (the value that was there initially)




    // iterate through a vector
    // - method 1
    cout << "\nlooping/iterating..." << endl;

    cout << "method 1:" << endl;

    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }

    cout << "method 2:" << endl;

    v.insert(v.begin() + 0, 10); // place a 10 at position 0
    for (auto itr = v.begin(); itr != v.end(); ++itr) {
        cout << *itr << endl;
    }
} 
