#include <iostream>
#include <vector>
 
using namespace std;
 
const int MAXN = 5000005;
int spf[MAXN];
int dp[MAXN];
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    for (int i = 2; i * i < MAXN; i++) {
        if (!spf[i]) {
            for (int j = i * i; j < MAXN; j += i) {
                if (!spf[j]) spf[j] = i;
            }
        }
    }
 
    for (int i = 2; i < MAXN; i++) {
        if (!spf[i]) spf[i] = i;
        dp[i] = dp[i / spf[i]] + 1;
    }
 
    for (int i = 2; i < MAXN; i++) {
        dp[i] += dp[i - 1];
    }
 
    int t;
    if (cin >> t) {
        while (t--) {
            int a, b;
            cin >> a >> b;
            cout << dp[a] - dp[b] << "
";
        }
    }
 
    return 0;
}