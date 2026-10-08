#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string test = "Hello world my name is Myles! hahahahahahahahahahaaha";

    map<char, int> freq;

    //cout << "Size of map: " << freq.size() << endl;
    //cout << "Length of the string 'test': " << test.length() << endl;

    // Stores length of the string
    int N = test.length();
    for (int i = 0; i < N; ++i) {
        char letter = test[i];
        cout << "i=" << i << endl;
        cout << "letter=" << test[i] << endl;
        
        // check if letter exists in the map...
        if (freq.find(letter) == freq.end()) {
            // no: make it 0
            freq[letter] = 0;
        }
        // regardless, increment by 1!
        freq[letter]++;
    }

    // iterate again and print results of final map
    //cout << "Size of map: " << freq.size() << endl;
    cout << "-----\niterating through finished map 'freq' ... \n-----\n";
    for (auto itr = freq.begin(); itr != freq.end(); ++itr) {
        cout << itr->first << ": " << itr->second << endl;
    }
} 
