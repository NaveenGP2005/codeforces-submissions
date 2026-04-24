#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        int typeA = 0, typeB = 0;
 
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && a[i] % 2 == 1) typeA++;
            if (i % 2 == 1 && a[i] % 2 == 0) typeB++;
        }
 
        if (typeA != typeB)
            cout << -1 << '
';
        else
            cout << typeA << '
';
    }
    return 0;
}