// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long w,h;
        cin>>w>>h;
        long long k=0,ans=0;
        cin>>k;
        vector<long long>a(k);
        for(int i=0;i<k;i++) cin>>a[i];
        ans=max(ans,(a.back()-a.front())*h);
        
        cin>>k;
        a.resize(k);
        for(int i=0;i<k;i++) cin>>a[i];
        ans=max(ans,(a.back()-a.front())*h);
        
        cin>>k;
        a.resize(k);
        for(int i=0;i<k;i++) cin>>a[i];
        ans=max(ans,(a.back()-a.front())*w);
        
        cin>>k;
        a.resize(k);
        for(int i=0;i<k;i++) cin>>a[i];
        ans=max(ans,(a.back()-a.front())*w);
        
        cout<<ans<<endl;
    }
    return 0;
}