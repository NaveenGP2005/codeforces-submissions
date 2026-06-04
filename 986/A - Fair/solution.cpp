#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    
    vector<vector<int>>adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    
    vector<vector<int>>dist(k+1,vector<int>(n+1,-1));
    for(int c=1;c<=k;c++){
        queue<int>q;
        for(int i=1;i<=n;i++){
            if(a[i]==c){
                dist[c][i]=0;
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int u=q.front();
            q.pop();
            for(int v:adj[u]){
                if(dist[c][v]==-1){
                    dist[c][v]=dist[c][u]+1;
                    q.push(v);
                }
            }
        }
    }
    
    
    for(int i=1;i<=n;i++){
        vector<int>td;
        for(int c=1;c<=k;c++) td.push_back(dist[c][i]);
        
        sort(td.begin(),td.end());
        int mincost=0;
        
        for(int j=0;j<s;j++) mincost+=td[j];    
        cout<<mincost<<(i==n?"":" ");
    }
    
    cout<<endl;
    return 0;
}
 
 