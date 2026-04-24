#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
 
using namespace std;
 
int main() {
    string s1, s2;
    // Reading the two input strings
    if (!(cin >> s1 >> s2)) return 0;
 
    // Convert both strings to lowercase for case-insensitive comparison
    for (int i = 0; i < s1.length(); i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
 
    // Lexicographical comparison
    if (s1 < s2) {
        cout << -1 << endl;
    } else if (s1 > s2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
 
    return 0;
}