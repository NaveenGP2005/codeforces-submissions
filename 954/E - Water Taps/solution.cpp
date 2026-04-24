// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
    long long n,T;
    cin>>n>>T;
    vector<long long>a(n),t(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>t[i];
    long double total=0,dev=0;
    for(int i=0;i<n;i++){
        total+=a[i];
        dev+=(a[i]*(t[i]-T));
    }
    if(fabs(dev)<1e-12){
        cout<<fixed<<setprecision(15)<<total;
        return 0;
    }
    vector<pair<long double,long double>> v;
 
    for(int i=0;i<n;i++)
        v.push_back({t[i],a[i]});
 
    if(dev>0){
        sort(v.rbegin(),v.rend());
        for(auto [temp,cap]:v){
            if(temp<=T) break;
            long double d=temp-T;
            long double remove=min(cap,dev/d);
            dev-=remove*d;
            total-=remove;
            if(fabs(dev)<1e-12) break;
        }
    }
    else{
        sort(v.begin(),v.end());
        for(auto [temp,cap]:v){
            if(temp>=T) break;
            long double d=temp-T;
            long double remove=min(cap,dev/d);
            dev-=remove*d;
            total-=remove;
            if(fabs(dev)<1e-12) break;
        }
    }
    cout<<fixed<<setprecision(15)<<total;
   return 0;
}