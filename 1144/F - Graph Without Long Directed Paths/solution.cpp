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
    vector<pair<int,int>>e(m);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
        e[i]={u,v};
    }
    
    vector<int>color(n+1,-1);
    bool flag=1;
    queue<int>q;
    color[1]=0;
    q.push(1);
    
    while(q.size()){
        int u=q.front();q.pop();
        for(int v:g[u]){
            if(color[v]==-1){
                color[v]=1-color[u];
                q.push(v);
            }
            else if(color[u]==color[v]){
                flag=0;
            }
        }
    }
    
    if(!flag){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        string ans="";
        for(int i=0;i<m;i++){
            int u=e[i].first;
            if(color[u]==0)
            ans+='0';
            else
            ans+='1';
        }
    cout<<ans<<endl;
    }
    
    
    
    return 0;
    
}