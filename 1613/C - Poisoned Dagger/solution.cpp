// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
bool can(long long k,long long h,vector<long long>&a){
    int n=a.size();
    long long damage=0;
    for(int i=0;i<n-1;i++){
        damage+=min(k,-a[i]+a[i+1]);
        if(damage>=h) return 1;
    }
    damage+=k;
    return damage>=h;
}
 
int main() {
   int t;
   cin>>t;
   while(t--){
       long long n,k,ans=-1;
       cin>>n>>k;
       vector<long long>a(n);
       for(int i=0;i<n;i++) cin>>a[i];
       
       long long low=0,high=1e18;
       while(low<=high){
           long long mid=low+(high-low)/2;
           if(can(mid,k,a)){
               ans=mid;
               high=mid-1;
           }
           else low=mid+1;
       }
       cout<<ans<<endl;
   }
   
   return 0;
}