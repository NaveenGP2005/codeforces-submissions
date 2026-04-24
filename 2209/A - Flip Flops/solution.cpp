#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         long long n,c,k;
         cin>>n>>c>>k;
         vector<long long>a(n);
         for(int i=0;i<n;i++) cin>>a[i];
         
         sort(a.begin(),a.end());
         for(int i=0;i<n;i++){
             if(a[i]>c) break;
             long long fused=min(k,c-a[i]);
             k-=fused;
             a[i]+=fused;
             c+=a[i];
         }
         
         cout<<c<<endl;
    }
    return 0;
}