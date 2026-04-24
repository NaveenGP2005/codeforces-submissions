#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        bool flag = false;
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 67) flag = true;
        }
 
        cout << (flag ? "YES" : "NO") << endl;
    }
 
    return 0;
}