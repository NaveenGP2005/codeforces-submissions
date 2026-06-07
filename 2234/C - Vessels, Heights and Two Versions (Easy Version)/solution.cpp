#include <bits/stdc++.h>
using namespace std;
 
/*
n=3000 bruh so n^2 brute
*/
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         vector<long long>h(n);
         for(int i=0;i<n;i++) cin>>h[i];
         
         
         vector<long long>ans(n);
         for(int i=0;i<n;i++){
             vector<long long>l(n,0),r(n,0);
             l[i]=0,r[i]=0;
             int curr=i;
             
             for(int j=1;j<n;j++){
                 int prev=(curr-1+n)%n;
                 l[prev]=max(l[curr],h[prev]);
                 curr=prev;
             }
             curr=i;
             for(int j=1;j<n;j++){
                 int next=(curr+1)%n;
                 r[next]=max(r[curr],h[curr]);
                 curr=next;
             }
             
             long long total=0;
             for(int j=0;j<n;j++) total+=min(r[j],l[j]);
             ans[i]=total;
         }
         
         
         for(int i=0;i<n;i++) cout<<ans[i]<<" ";
         
         cout<<endl;
         
     }
     
    return 0;
}
 
 