// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const int MOD = 1000000007;
 
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}
int main() {
    long long x,n;
    cin>>x>>n;
    
    vector<long long>prime;
    long long temp=x;
    for(int i=2;i*i<=temp;i++){
        if(temp%i==0) prime.push_back(i);
        while(temp%i==0) temp/=i;
    }
    
    if(temp>1) prime.push_back(temp);
    long long ans=1;
    for(long long p:prime) {
        long long curn=n,cnt=0;
        while(curn>0){
            cnt+=(curn/p);
            curn/=p;
        }
    cnt%=(MOD-1);
    ans=(ans*power(p,cnt))%MOD;
    }
    
    cout<<ans<<endl;
   return 0;
}