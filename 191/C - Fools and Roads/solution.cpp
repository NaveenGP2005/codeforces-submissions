#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=100005;
vector<pair<int,int>>g[MAXN];
int up[MAXN][19],d[MAXN];
int da[MAXN],ans[MAXN];
 
void dfs_LCA(int u,int p,int h){
    up[u][0]=p; d[u]=h;
 
    for(int i=1;i<19;i++) up[u][i]=up[up[u][i-1]][i-1];
 
    for(auto edge:g[u]){ 
        int v=edge.first;
    if(v!=p) dfs_LCA(v,u,h+1);
    }
}
 
 
int glca(int u,int v){
    if(d[u]<d[v]) swap(u,v);
    
    int diff=d[u]-d[v];
    for(int i=0;i<19;i++) if((diff>>i)&1) u=up[u][i];
    
    if(u==v) return u;
    
    for(int i=18;i>=0;i--){
        if(up[u][i]!=up[v][i]){
            u=up[u][i];
            v=up[v][i];
        }
    }
    return up[u][0];
}
 
 
int dfss(int u,int p){
    int csum=da[u];
    for(auto edge:g[u]){
        int v=edge.first;
        int idx=edge.second;
        if(v!=p){
            int ssum=dfss(v,u);
            ans[idx]=ssum;
            csum+=ssum;
        }
    }
    return csum;
}
 
 
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n,m; cin>>n;
 
    for(int i=1;i<=n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back({v,i});
        g[v].push_back({u,i});
    }
 
    dfs_LCA(1,1,0);
 
    cin>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        int lca=glca(u,v);
        da[u]+=1;
        da[v]+=1;
        da[lca]-=2;
    }
    
    dfss(1,1);
    
    for(int i=1;i<=n-1;i++) cout<<ans[i]<<" ";
    
    cout<<endl;
    return 0;
}