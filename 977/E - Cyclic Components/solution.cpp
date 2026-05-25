#include <bits/stdc++.h>
using namespace std;
    int n,m;
    vector<vector<int>>g;
    vector<bool>vis;
    bool flag;
    
    
    void dfs(int u){
        vis[u]=1;
        
        if(g[u].size()!=2) flag=0;
        for(int child:g[u]){
            if(!vis[child])
            dfs(child);
        }
    }
    
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    g.resize(n+1);
    vis.resize(n+1,0);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            flag=1;
            dfs(i);
            
            
            if(flag)
            ans++;
        }
    }
    
    
    cout<<ans<<endl;
    return 0;
    
}