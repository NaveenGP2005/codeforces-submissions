#include <iostream>
#include <algorithm>
 
using namespace std;
 
typedef long long ll;
 
void solve() {
    ll a, k;
    cin >> a >> k;
    for (ll i = 0; i < k - 1; i++) {
        ll min_d = 9, max_d = 0;
        ll temp = a;
        
        while (temp > 0) {
            ll d = temp % 10;
            min_d = min(min_d, d);
            max_d = max(max_d, d);
            temp /= 10;
        }
        
        if (min_d == 0) break;
        
        a += min_d * max_d;
    }
    cout << a << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}