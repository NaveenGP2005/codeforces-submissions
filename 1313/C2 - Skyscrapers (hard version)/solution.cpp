#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    vector<long long>l(n,0),r(n,0);
    stack<int>st;
    for(int i=0;i<n;i++){
        while(st.size()&&a[st.top()]>a[i]) st.pop();
        if(st.empty()) l[i]=(long long)(i+1)*a[i];
        else{
            int prev=st.top();
            l[i]=l[prev]+(long long)(i-prev)*a[i];
        }
        st.push(i);
    }
    
    while (!st.empty()) st.pop();
    for(int i=n-1;i>=0;i--){
        while(st.size()&&a[st.top()]>a[i]) st.pop();
        if(st.empty()) r[i]=(long long)(n-i)*a[i];
        else{
            int next=st.top();
            r[i]=r[next]+(long long)(next-i)*a[i];
        }
        st.push(i);
    }
    
    long long best = 0;
    int peak = 0;
 
    for(int i = 0; i < n; i++) {
    long long total = l[i] + r[i] - a[i];
    if(total > best) {
        best = total;
        peak = i;
    }
}
    vector<long long> ans(n);
    ans[peak] = a[peak];
 
    for (int i = peak - 1; i >= 0; i--) {
        ans[i] = min(a[i], ans[i + 1]);
    }
    for (int i = peak + 1; i < n; i++) {
        ans[i] = min(a[i], ans[i - 1]);
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "
";
    return 0;
}