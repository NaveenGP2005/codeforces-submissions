// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    long long n,k;
    cin>>n>>k;
    if(k==1) cout<<n<<endl;
    else{
        long long ans=1;
        while(ans<=n) ans=ans*2;
        
        cout<<ans-1<<endl;
    }
   return 0;
}