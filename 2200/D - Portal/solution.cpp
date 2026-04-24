#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    vector<int> A, B, C;
    for (int i = 0; i < x; i++) A.push_back(p[i]);
    for (int i = x; i < y; i++) B.push_back(p[i]);
    for (int i = y; i < n; i++) C.push_back(p[i]);
 
    vector<int> AC;
    AC.insert(AC.end(), A.begin(), A.end());
    AC.insert(AC.end(), C.begin(), C.end());
 
    int min_val = B[0];
    int min_idx = 0;
    for (int i = 1; i < B.size(); i++) {
        if (B[i] < min_val) {
            min_val = B[i];
            min_idx = i;
        }
    }
 
    vector<int> S;
    for (int i = min_idx; i < B.size(); i++) S.push_back(B[i]);
    for (int i = 0; i < min_idx; i++) S.push_back(B[i]);
 
    vector<int> result;
    int i = 0;
    
    while (i < AC.size() && AC[i] < S[0]) {
        result.push_back(AC[i]);
        i++;
    }
    
    for (int val : S) {
        result.push_back(val);
    }
    
    while (i < AC.size()) {
        result.push_back(AC[i]);
        i++;
    }
 
    for (int j = 0; j < n; j++) {
        cout << result[j] << (j == n - 1 ? "" : " ");
    }
    cout << "
";
}
 
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}