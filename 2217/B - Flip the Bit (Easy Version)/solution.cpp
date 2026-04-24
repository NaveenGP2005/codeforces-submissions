#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int p;
        cin>>p;
        p--;
        int ld=0,rd=0;
        if(a[0]!=a[p]) ld++;
        for(int i=0;i<p;i++){
            if(a[i]!=a[i+1]) ld++;
        }
        
        
        for(int i=p;i<n-1;i++) {
            if(a[i]!=a[i+1]) rd++;
        }
        
        if(a[n-1]!=a[p]) rd++;
        cout<<max(ld,rd)<<endl;
    }
}