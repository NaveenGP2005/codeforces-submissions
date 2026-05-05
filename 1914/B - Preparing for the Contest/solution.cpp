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
         for(int i=n;i>k+1;i--) cout<<i<<" ";
         for(int i=1;i<=k+1;i++) cout<<i<<" ";
         
         ////////khela hobe hae
         cout<<endl;
    }
    return 0;
}