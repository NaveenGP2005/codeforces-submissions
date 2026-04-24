#include <bits/stdc++.h>
using namespace std;
 
long long n, k;
vector<long long> a, b;
 
bool can(long long x) {
    // We move 'c' inside so it resets to empty every time we check a new 'x'
    // c[time] stores laptops that will die at that specific minute
    vector<vector<int>> c(k); 
    vector<long long> charges(n, 0);
 
    // Your loop: instead of calculating the final answer, we just check 
    // when they will naturally die.
    for(int i = 0; i < n; i++) {
        if(a[i] / b[i] < k) {
            c[a[i] / b[i]].push_back(i);
        }
    }
 
    // Since we only have 1 charger, we MUST step through the k minutes
    int time_passed = 0;
    for(int step = 0; step < k; step++) {
        // Find the earliest minute someone is dying
        while(time_passed < k && c[time_passed].empty()) {
            time_passed++;
        }
        
        if(time_passed == k) return 1; // c is completely empty, everyone survives!
        if(time_passed < step) return 0; // Someone died before we reached this step
        
        // Grab the laptop dying right now
        int id = c[time_passed].back();
        c[time_passed].pop_back();
        
        // Give it 1 charge, recalculate its new death time, put it in the new bucket
        charges[id]++;
        long long new_death = (a[id] + charges[id] * x) / b[id];
        
        if(new_death < k) {
            c[new_death].push_back(id);
        }
    }
    return 1;
}
 
int main() {
    cin >> n >> k;
    a.resize(n); b.resize(n); 
    // Removed c.resize(n) from here because 'c' is now inside can()
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i]; // Fixed your typo: changed 'm' to 'n'
    
    // Fixed your range: lowest possible charger is 0, highest is 2e12 (max b[i] * k)
    long long ans = -1, low = 0, high = 2e12; 
    
    while(low <= high) {
        long long mid = low + (high - low) / 2;
        if(can(mid)) { // Fixed your syntax error: missing ')'
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    
    cout << ans << endl;
    return 0;
}