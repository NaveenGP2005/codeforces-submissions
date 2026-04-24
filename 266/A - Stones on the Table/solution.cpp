#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n;
    string s;
    if (cin >> n >> s) {
        int removals = 0;
         for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                removals++;
            }
        }
        cout << removals << endl;
    }
    
    return 0;
}