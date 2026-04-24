#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<int>a(n);
         for(int i=0;i<n;i++) cin>>a[i];
         
         vector<int>ans(n);
         int cntg=0,cnts=0;
         for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 if(a[j]>a[i]) cntg++;
                 else if(a[i]>a[j]) cnts++;
             }
             ans[i]=(max(cntg,cnts));
             cntg=0,cnts=0;
         }
         
         for(int i=0;i<n;i++) cout<<ans[i]<<" ";
         
         cout<<endl;
    }
    return 0;
}