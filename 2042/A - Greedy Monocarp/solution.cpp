#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
   int n,k;
   cin>>n>>k;
   vector<int>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   
   
   
   
   sort(a.rbegin(),a.rend());
   int csum=0;
   for(int i=0;i<n;i++){
       if(csum+a[i]<=k) csum+=a[i];
       else break;
   }
   
   
   cout<<k-csum<<endl;
    }
    return 0;
}