#include <bits/stdc++.h>
using namespace std;
const int MAXN=300005;
vector<int>g[MAXN];
int up[MAXN][19];
int d[MAXN];
 
void dfs(int idx,int par,int level){
    up[idx][0]=par;
    d[idx]=level;
    for(int i=1;i<19;i++){
        up[idx][i]=up[up[idx][i-1]][i-1];
    }
    for(auto child:g[idx]){
        if(child!=par){
            dfs(child,idx,level+1);
        }
    }
}
 
 
int glca(int a,int b){
    if(d[a]<d[b]) swap(a,b);
    
    int diff=d[a]-d[b];
    for(int i=0;i<19;i++){
        if((diff>>i)&1){
            a=up[a][i];
        }
    }
    
    if(a==b) return a;
    for(int i=18;i>=0;i--){
        if(up[a][i]!=up[b][i]){
            a=up[a][i];
            b=up[b][i];
        }
    }
    return up[a][0];
}
 
int gdist(int a,int b){
    int lca=glca(a,b);
    return d[a]+d[b]-2*d[lca];
}
 
bool ivalid(int dist, int k) {
    return (k >= dist) && ((k - dist) % 2 == 0);
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    dfs(1,1,0);
    cin>>m;
    while(m--){
        int a,b,x,y,k;
        cin>>x>>y>>a>>b>>k;
        int d1=gdist(a,b);
        int d2=gdist(a,x)+1+gdist(y,b);
        int d3=gdist(a,y)+1+gdist(x,b);
        
        
        if(ivalid(d1,k)||ivalid(d2,k)||ivalid(d3,k)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}