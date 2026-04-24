// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
    long long n,m,k;
long long can(long long x) {
    long long cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=min(m,(x/i));
    }
    return cnt;
}
 
int main() {
    cin>>n>>m>>k;
    
    long long ans=n*m,low=1,high=n*m;
    while(low<=high){
        long long mid=(low+high)/2;
        if(can(mid)>=k){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    
    cout<<ans<<endl;
   return 0;
}