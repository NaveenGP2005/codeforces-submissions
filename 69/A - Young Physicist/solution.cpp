// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,x,y,z,xs=0,ys=0,zs=0;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        xs+=x,ys+=y,zs+=z;
    }
    if(!xs&&!ys&&!zs) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
    }