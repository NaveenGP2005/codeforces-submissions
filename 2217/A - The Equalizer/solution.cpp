#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int ts=0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            ts+=a[i];
        }
          
          if(ts%2!=0){
              cout<<"YES"<<endl;
              continue;
          }
        else{
            ts=n*k;
            if(ts%2==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
}