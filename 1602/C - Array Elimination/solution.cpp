// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const long long MOD=1e9+7;
int main() {
   int n;
   cin>>n;
   while(n--){
       int sz;
       cin>>sz;
       vector<int>bitcnt(30,0);
       for(int i=0;i<sz;i++){
           int x;cin>>x;
           for(int j=0;j<30;j++)
           if((x>>j)&1) 
           bitcnt[j]++;
       }
       
       for(int k=1;k<=sz;k++){
           bool ok=1;
           for(int j=0;j<30;j++)
           if(bitcnt[j]%k!=0){
               ok=0;
               break;
           }
           if(ok)cout<<k<<" ";
       }
       cout<<endl;
   }
   return 0;
}