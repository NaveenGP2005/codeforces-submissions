#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int up = 0;
    int low = 0;
    for (char c : s) {
        if (isupper(c)) up++;
        else low++;
    }
    if (up > low) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}