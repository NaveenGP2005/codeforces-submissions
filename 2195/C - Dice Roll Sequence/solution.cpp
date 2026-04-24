#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    const int INF = 1e9;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
 
        vector<int> prev(7), cur(7);
 
        for (int x = 1; x <= 6; x++) {
            prev[x] = (x != a[0]);
        }
 
        for (int i = 1; i < n; i++) {
            for (int x = 1; x <= 6; x++) {
                cur[x] = INF;
                for (int y = 1; y <= 6; y++) {
                    if (x != y && x + y != 7) {
                        cur[x] = min(cur[x],
                            prev[y] + (x != a[i]));
                    }
                }
            }
            prev = cur;
        }
 
        cout << *min_element(prev.begin() + 1, prev.end()) << '
';
    }
    return 0;
}