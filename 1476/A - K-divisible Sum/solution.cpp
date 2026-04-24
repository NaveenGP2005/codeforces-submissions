// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
   int t;
   cin>>t;
   while(t--){
       long long n,k;
       cin>>n>>k;
       long long s=((n+k-1)/k)*k;
       cout<<(s+n-1)/n<<endl;
   }
   return 0;
}