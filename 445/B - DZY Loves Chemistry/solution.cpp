#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=55;
vector<int>g[MAXN];
   vector<bool>vis(MAXN,0);
 
void dfs(int idx){
    vis[idx]=1;
    for(int child:g[idx]){
        if(!vis[child])
        dfs(child);
    }
}
 
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
   int n,m;
   cin>>n>>m;
   for(int i=0;i<m;i++) {
       int u,v;
       cin>>u>>v;
       g[u].push_back(v);
       g[v].push_back(u);
   }
   int c=0;
   for(int i=1;i<=n;i++){
       if(!vis[i]){
           c++;
           dfs(i);
       }
   }
   
   
   long long ans=1;
   int power=n-c;
   for(int i=0;i<power;i++) ans*=2LL;
   
   
   cout<<ans<<endl;
   
    return 0;
}