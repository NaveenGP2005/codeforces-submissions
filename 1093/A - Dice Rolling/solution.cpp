#include <iostream>
 
using namespace std;
 
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << x / 2 << "
";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}