#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
bool can(long long x,long long k,vector<long long>&a){
    long long cnta=0,cntb=0;
    for(int i=0;i<(int)a.size();i++){
        if(cnta%2==0){//odd
            if(a[i]<=x) cnta++;
        }
        else cnta++;
    }
    
    for(int i=0;i<(int)a.size();i++){
        if(cntb%2!=0){//even
            if(a[i]<=x) cntb++;
        }
        else cntb++;
    }
    
    return (cnta>=k||cntb>=k);
    
}
 
int main() {
   long long n,k;
   cin>>n>>k;
   vector<long long>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   
   
   long long l=0,r=1e9,ans=-1;
   while(l<=r){
       long long mid=(l+r)/2;
       if(can(mid,k,a)){
           ans=mid;
           r=mid-1;
       }
       else l=mid+1;
   }
   
   cout<<ans<<endl;
   return 0;
}