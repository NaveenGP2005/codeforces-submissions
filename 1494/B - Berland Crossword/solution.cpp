// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    long long n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    long long u1=u,r1=r,d1=d,l1=l;
    if(u==n) l1--,r1--;
    if(d==n) l1--,r1--;
    if(r==n) u1--,d1--;
    if(l==n) u1--,d1--;
    if(u==n-1) {
        if(r1>l1) r1--;
        else l1--;
    }
    if(d==n-1) {
        if(r1>l1) r1--;
        else l1--;
    }
    if(r==n-1) {
        if(u1>d1) u1--;
        else d1--;
    }
    if(l==n-1) {
        if(u1>d1) u1--;
        else d1--;
    }
    if(u1<0||d1<0||l1<0||r1<0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }
   return 0;
}