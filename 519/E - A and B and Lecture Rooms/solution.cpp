#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=100005;
vector<int>g[MAXN];
int up[MAXN][19],d[MAXN];
int sz[MAXN];
 
void dfs(int u,int p,int h){
    up[u][0]=p; d[u]=h; sz[u]=1;
 
    for(int i=1;i<19;i++) up[u][i]=up[up[u][i-1]][i-1];
 
    for(int v:g[u]){ 
    if(v!=p){ dfs(v,u,h+1); sz[u]+=sz[v];}
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
 
int gk(int u,int k){
    for(int i=0;i<19;i++){
        if((k>>i)&1) u=up[u][i];
    }
    return u;
}
 
int gdist(int u,int v){
    int lca=glca(u,v);
    return d[u]+d[v]-2*d[lca];
}
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n,m; cin>>n;
 
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
 
    dfs(1,1,0);
 
    cin>>m;
    while(m--){
        int u,v;
        cin>>u>>v;
        if(u==v){
            cout<<n<<endl;
            continue;
        }
        int dist=gdist(u,v);
        
        if(dist%2){
            cout<<0<<endl;continue;
        }
        if(d[u]<d[v]) swap(u,v);
        
        int mid=dist/2;
        if(d[u]==d[v]){
            int up=gk(u,mid-1);
            int vp=gk(v,mid-1);
            
            cout<<n-sz[up]-sz[vp]<<endl;
        }
        else{
            int midd=gk(u,mid);
            int up=gk(u,mid-1);
            cout<<sz[midd]-sz[up]<<endl;
        }
    }
    
    return 0;
}