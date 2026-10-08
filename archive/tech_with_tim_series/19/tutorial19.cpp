#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string test = "This is a test zzzaaaksdfjfjdkddkiokjdfkj";
    string find = "hello";
    set<char> findLetters; // init empty set

    // iterate through the short string 'find' and add letters to the set.
    for (int i = 0; i < find.length(); ++i) {
        char letter = find[i];
        findLetters.insert(letter);
    }

    // iterate through the long string 'test' and delete letters to the set. (so that we end with a set of length==0)
    for (int i = 0; i < test.length(); ++i) {
        char letter = test[i];
        findLetters.erase(letter);
    }

    // confirm there are 0 letters remaining in 'findLetters'
    if (findLetters.size() >= 1) {
        cout << "NO! It does not have all of the letters." << endl;
        cout << "printing the letters remaining in the set..." << endl;

        for (auto itr = findLetters.begin(); itr != findLetters.end(); ++itr) {
            cout << *itr << endl;
        }

    } else {
        cout << "YES! It does!" << endl;
    }
} 
