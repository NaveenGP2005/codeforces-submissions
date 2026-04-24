// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
long long can(long long n,long long m){
    long long total=0;
    for(long long k=2;k*k*k<=n;k++){
        total+=(n/(k*k*k));
        if(total>m) return total;
    }
    return total;
}
 
int main() {
   long long t;
   cin>>t;
       long long low=0,high=5e15,ans=-1;
       while(low<=high){
           long long mid=low+(high-low)/2;
           long long ways=can(mid,t);
           if(ways==t){
               ans=mid;
               high=mid-1;
           }
           else if(ways<t)low=mid+1;
           else high=mid-1;
       }
       cout<<ans<<endl;
   
   
   return 0;
}