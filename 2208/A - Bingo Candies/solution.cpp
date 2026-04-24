#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
     int t;
     cin>>t;
     while(t--){
         long long n;
         cin>>n;
         unordered_map<int,int>mp;
         int ans=0;
         for(int i=0;i<n*n;i++){
         int x;
         cin>>x;
         mp[x]++;
         ans=max(ans,mp[x]);
         }
         
         if(ans<=(n*n-n)) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
         
     }
    return 0;
}