#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
     int t;
     cin>>t;
     while(t--){
         long long n;
         cin>>n;
         vector<double>c(n),p(n);
         for(int i=0;i<n;i++)cin>>c[i]>>p[i];
         double ans=0;
         for(int i=n-1;i>=0;i--){
             double s=1-(p[i]/100);
             double skip=ans;
             double take=s*ans+c[i];
             ans=max(skip,take);
         }
         cout<<fixed<<setprecision(10)<<ans<<endl;
     }
    return 0;
}