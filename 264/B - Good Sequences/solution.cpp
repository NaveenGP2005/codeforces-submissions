// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const int MAX_A = 100005;
int spf[MAX_A],dpPrime[MAX_A];
 
void b_spf(){
    for(int i=1;i<MAX_A;i++) spf[i]=i;
    for(int i=2;i*i<MAX_A;i++){
        if(spf[i]==i){
            for(int j=i*i;j<MAX_A;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
 
int main() {
   long long n;
   cin>>n;
   vector<long long>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   b_spf();
   
   int ans=1;
    for(int x:a){
        vector<int> primes;
        while(x>1){
            int p=spf[x];
            primes.push_back(p);
            while(spf[x]==p) x/=p;
        }
        int best=0;
        for(int p:primes)
            best=max(best,dpPrime[p]);
        for(int p:primes)
            dpPrime[p]=best+1;
        ans=max(ans,best+1);
    }
    cout<<ans;
   return 0;
}