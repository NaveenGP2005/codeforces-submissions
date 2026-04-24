#include <bits/stdc++.h>
using namespace std;
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
         int u,v;
         cin>>u>>v;
         if(u>v){
             cout<<"NO"<<endl;
             continue;
         }
         int usup=0,vdem=0;
         bool pos=0;
         for(int i=0;i<30;i++){
             if((u>>i)&1) usup++;
             if((v>>i)&1) vdem++;
             if(usup<vdem) {
                 pos=1;
                 break;
             }
         }
         if(pos) cout<<"NO"<<endl;
         else
         cout<<"YES"<<endl;
     }
    return 0;
}