#include <bits/stdc++.h>
using namespace std;
    int n,m;
    vector<vector<int>>g;
    vector<int>c;
    int ans=0;
    
    
    void dfs(int u,int p,int cnt){
        if(c[u]==1) cnt++;
        else cnt=0;
        
        if(cnt>m) return;
        bool leaf=1;
        for(int child:g[u]){
            if(child!=p){
            leaf=0;
            dfs(child,u,cnt);
            } 
        }
        
        if(leaf) ans++;
    }
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    c.resize(n+1);
    for(int i=1;i<=n;i++) cin>>c[i];
    g.resize(n+1);
    
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    
    dfs(1,0,0);
    cout<<ans<<endl;
    return 0;
    
}