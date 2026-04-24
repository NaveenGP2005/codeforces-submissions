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
        
        vector<vector<int>> blogs(n);
        for (int i = 0; i < n; i++) {
            int l;
            cin >> l;
            blogs[i].resize(l);
            for (int j = 0; j < l; j++) cin >> blogs[i][j];
        }
        
        // reduce each blog: read right to left, keep first occurrence of each user
        // this gives us the effective sequence that gets prepended to Q
        vector<vector<int>> reduced(n);
        for (int i = 0; i < n; i++) {
            unordered_set<int> seen;
            for (int j = (int)blogs[i].size() - 1; j >= 0; j--) {
                if (!seen.count(blogs[i][j])) {
                    seen.insert(blogs[i][j]);
                    reduced[i].push_back(blogs[i][j]);
                }
            }
        }
        
        // greedily pick which blog to post LAST, then second to last, etc.
        // the blog posted last controls the front of Q, so we want its
        // new users (not seen in any later blog) to be as small as possible
        vector<bool> picked(n, false);
        unordered_set<int> seen_so_far; // users from already-picked (later) blogs
        vector<int> order; // stores blogs from last to first
        
        for (int step = 0; step < n; step++) {
            int best = -1;
            vector<int> best_seq;
            
            for (int i = 0; i < n; i++) {
                if (picked[i]) continue;
                
                // new users this blog contributes to the front of Q
                vector<int> new_users;
                for (int u : reduced[i]) {
                    if (!seen_so_far.count(u)) new_users.push_back(u);
                }
                
                if (best == -1 || new_users < best_seq) {
                    best = i;
                    best_seq = new_users;
                }
            }
            
            picked[best] = true;
            order.push_back(best);
            for (int u : reduced[best]) seen_so_far.insert(u);
        }
        
        // order is [last blog, ..., first blog], reverse to get posting order
        reverse(order.begin(), order.end());
        
        // simulate the actual posting to build Q
        list<int> Q;
        unordered_map<int, list<int>::iterator> pos;
        
        for (int idx : order) {
            for (int u : blogs[idx]) {
                auto it = pos.find(u);
                if (it != pos.end()) Q.erase(it->second);
                Q.push_front(u);
                pos[u] = Q.begin();
            }
        }
        
        bool first = true;
        for (int u : Q) {
            if (!first) cout << ' ';
            cout << u;
            first = false;
        }
        cout << '
';
    }
    
    return 0;
}