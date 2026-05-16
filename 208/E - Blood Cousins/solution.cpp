#include <bits/stdc++.h>
using namespace std;
 
const int N=1e5+5,L=19;
vector<int> g[N],dep[N];
int up[N][L],d[N],in[N],out[N],t;
 
void dfs(int u,int p,int h){
    in[u]=++t; up[u][0]=p; d[u]=h;
    dep[h].push_back(in[u]);
 
    for(int i=1;i<L;i++) up[u][i]=up[up[u][i-1]][i-1];
 
    for(int v:g[u]) if(v!=p) dfs(v,u,h+1);
 
    out[u]=++t;
}
 
int kth(int u,int k){
    for(int i=0;i<L;i++) if(k>>i&1) u=up[u][i];
    return u;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n,p,v,m; cin>>n;
 
    for(int i=1;i<=n;i++){
        cin>>p;
        g[p].push_back(i);
        g[i].push_back(p);
    }
 
    dfs(0,0,0);
 
    cin>>m;
    while(m--){
        cin>>v>>p;
        int a=kth(v,p);
 
        if(!a){ cout<<0<<" "; continue; }
 
        auto &x=dep[d[v]];
        int ans=upper_bound(x.begin(),x.end(),out[a])-
                lower_bound(x.begin(),x.end(),in[a])-1;
 
        cout<<ans<<" ";
    }
}