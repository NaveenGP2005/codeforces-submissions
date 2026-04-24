// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
 
int main() {
   long long n,k;
   cin>>n>>k;
   if(n==1) cout<<"0"<<endl;
   else if(n<=k) cout<<"1"<<endl;
   else{
   long long out=(k*(k+1)/2)-k,ans=-1;
   long long low=2,high=k;
   while(low<=high){
       long long mid=low+(high-low)/2;
       long long req=out-((mid*(mid-1)/2)-mid);
       if(req>=n){
           ans=k-(mid-1);
           low=mid+1;
       }
       else high=mid-1;
   }
   cout<<ans<<endl;
   }
   return 0;
}