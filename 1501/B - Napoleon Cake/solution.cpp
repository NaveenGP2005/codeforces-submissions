#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   int n;
   cin>>n;
   while(n--){
       int sz;
       cin>>sz;
       vector<int>a(sz);
       for(int i=0;i<sz;i++)cin>>a[i];
       
       int cream=0;
       vector<int>ans(sz);
       for(int i=sz-1;i>=0;i--){
           cream=max(cream-1,a[i]);
           if(cream>0) ans[i]=1;
           else ans[i]=0;
       }
       
       for(int i=0;i<sz;i++) cout<<ans[i]<<" ";
       cout<<endl;
   }
   
    return 0;
}