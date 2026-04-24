// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
long long nb,ns,nc,pb,ps,pc,rb,rs,rc,money;
 
bool can_make(long long x){
    long long buyb=max(0LL,x*rb-nb);
    long long buys=max(0LL,x*rs-ns);
    long long buyc=max(0LL,x*rc-nc);
    long long total_cost=buyb*pb+buys*ps+buyc*pc;
    return total_cost<=money;
}
 
 
int main() {
   string s;
   cin>>s;
   cin>>nb>>ns>>nc>>pb>>ps>>pc>>money;;
   for(char c:s){
       if(c=='B') rb++;
       else if(c=='S') rs++;
       else rc++;
   }
   long long low=0,high=1e14,ans=0;
   while(low<=high){
       long long mid=low+(high-low)/2;
       if(can_make(mid)){
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