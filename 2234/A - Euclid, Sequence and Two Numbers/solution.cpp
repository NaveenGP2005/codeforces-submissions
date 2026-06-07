#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
     int t;
     cin>>t;
     while(t--){
         int k;
         cin>>k;
         vector<int>a(k);
         for(int i=0;i<k;i++) cin>>a[i];
         
         sort(a.rbegin(),a.rend());
         bool ok=0;
         for(int i=0;i<k-2;i++){
             if(a[i]%a[i+1]!=a[i+2]){
                 ok=1;
                 break;
             }
         }
         
         
         if(ok) cout<<-1<<endl;
         else cout<<a[0]<<" "<<a[1]<<endl;
     }
     
    return 0;
}
 
 