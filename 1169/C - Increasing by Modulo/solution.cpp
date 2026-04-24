// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const long long N = 3e5+5;
    long long n,m;
    vector<long long>a(N);
bool check(long long maxi) {
    long long prev = 0;
    for(int i=0;i<=n-1;i++) {
        if(prev <= a[i]) {
            long long k= m - (a[i] - prev);
            if(k > maxi) prev = a[i];
        } else {
            long long k= prev - a[i];
            if(k > maxi) 
                return false;
        }
    }
    return true;
}
 
int main() {
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long l=0,r=m,ans=m;
    while(l<=r){
        long long mid=l+(r-l)/2;
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    
    cout<<ans<<endl;
   return 0;
}