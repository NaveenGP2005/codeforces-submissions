// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
bool can_make(long long x,long long n,long long k,vector<long long>a,vector<long long>b){
    long long needed=0;
    for(int i=0;i<n;i++){
        long long req=a[i]*x;
        if(req>b[i]){
            needed+=(req-b[i]);
        }
        if(needed>k) return false;
    }
    return needed<=k;
}
 
 
int main() {
   long long n,k;
   cin>>n>>k;
   vector<long long>a(n),b(n);
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<n;i++) cin>>b[i];
   long long low=0,high=1e14,ans=0;
   while(low<=high){
       long long mid=low+(high-low)/2;
       if(can_make(mid,n,k,a,b)){
           ans=mid;
           low=mid+1;
       }
       else{
           high=mid-1;
       }
   }
   cout<<ans<<endl;
   return 0;
}