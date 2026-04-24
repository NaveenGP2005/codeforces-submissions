// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
   int t;
   cin>>t;
   while(t--){
       long long n,m,k;
       cin>>n>>m>>k;
       long long maxj=min(m,n/k);
       m=m-maxj;
       k--;
       long long y=(m+k-1)/k;
       cout<<maxj-y<<endl;
   }
   return 0;
}