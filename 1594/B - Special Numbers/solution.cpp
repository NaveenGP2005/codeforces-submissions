// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const long long MOD=1e9+7;
int main() {
    int t;
    cin>>t;
    while(t--){
    long long n,k;
    cin>>n>>k;
    long long ans=0,power=1;
    while(k){
        if(k&1) ans=(ans+power)%MOD;
        k>>=1;
        power=(power*n)%MOD;
    }
    cout<<ans<<endl;
    }
   return 0;
}