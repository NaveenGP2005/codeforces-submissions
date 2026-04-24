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
    stack<int>s;
    for(int i=0;i<n;i++){
        long long parity=a[i]%2;
        if(s.size()&&(s.top()==parity)) s.pop();
        else s.push(parity);
    }
    
    if(s.size()<=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}