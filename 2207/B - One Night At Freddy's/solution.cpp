// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
   long long n,m,l;
   cin>>n>>m>>l;
    vector<long long >a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    vector<long long>hp(m,0);
    long long time=0;
    for(int i=0;i<=n;i++){
        long long d;
        if(i<n) d=a[i]-time;
        else d=l-time;
        
        long long k=n-i,c=min((long long)m,k+1);
        for(long long step=0;step<d;step++){
            sort(hp.rbegin(),hp.rend());
            hp[c-1]++;
        }
        if(i<n){
            sort(hp.rbegin(),hp.rend());
            hp[0]=0;
            time=a[i];
        }
    }
    sort(hp.rbegin(),hp.rend());
    cout<<hp[0]<<endl;
    }
   return 0;
}