// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    long long n,x;
    cin>>n>>x;
    vector<long long>pre;
    vector<bool>vis(1<<18,0);
    vis[0]=1;
    pre.push_back(0);
    for(int i=1;i<(1<<n);i++){
        if(vis[i^x]) continue;
        vis[i]=1;
        pre.push_back(i);
    }
    
    n=pre.size()-1;
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        cout<<(pre[i]^pre[i-1])<<" ";
    }
    cout<<endl;
   return 0;
}