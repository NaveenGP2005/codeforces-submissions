#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<long long> f(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> f[i];
        }
    
        long long total = (f[1] + f[n]) / (n - 1);
        vector<long long> S(n + 1);
        S[0] = 0;
        for (int i = 1; i < n; i++) {
            S[i] = (f[i + 1] - f[i] + total) / 2;
        }
        S[n] = total;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            a[i] = S[i] - S[i - 1];
        }
        for (int i = 1; i <= n; i++) {
            cout << a[i];
            if (i < n) cout << " ";
        }
        cout << "
";
    }
    
    return 0;
}