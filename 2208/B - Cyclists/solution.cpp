#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
     int t;
     cin>>t;
     while(t--){
         long long n,k,p,m;
         cin>>n>>k>>p>>m;
         vector<long long>a(n);
         for(int i=0;i<n;i++) cin>>a[i];
         
         
         long long pos=p,ans=0;
         while(1){
             if(pos<=k){
                 long long cost=a[pos-1];
                 if(cost>m) break;
                 m=m-cost;
                 ans++;
                 long long x=a[pos-1];
                 a.erase(a.begin()+(pos-1));
                 a.push_back(x);
             
                 pos=n;
             }
             else{
                 long long mcost=1e18,midx=-1;
                 for(int i=0;i<k;i++){
                     if(a[i]<mcost) mcost=a[i],midx=i;
                 }
                 if(mcost>m) break;
                 m=m-mcost;
                 long long x=a[midx];
                 a.erase(a.begin()+(midx));
                 a.push_back(x);
                 pos--;
             }
         }
         cout<<ans<<endl;
     }
    return 0;
}