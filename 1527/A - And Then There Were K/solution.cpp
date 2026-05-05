#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         
         int ans=1;
         while(ans*2<=n) ans*=2;
         
         
         cout<<ans-1<<endl;
    }
    return 0;
}