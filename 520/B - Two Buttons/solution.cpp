#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n>>m;
    
    int ans=0;
    while(m>n){
        if(m%2) m++,ans++;
        else m/=2,ans++;
    }
    
    ans+=(n-m);
    
    cout<<ans<<endl;
 
}