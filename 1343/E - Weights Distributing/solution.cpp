#include <bits/stdc++.h>
using namespace std;
 
 
void bfs(int s,vector<vector<int>>&g,vector<int>&d){
    d[s]=0;
    queue<int>q;
    q.push(s);
    while(q.size()){
        int u=q.front();
        q.pop();
        for(int v:g[u]){
            if(d[v]==-1){
                d[v]=d[u]+1;
                q.push(v);
            }
        }
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b,c;
        cin>>n>>m>>a>>b>>c;
        vector<long long>p(m);
        for(int i=0;i<m;i++) cin>>p[i];
        
        sort(p.begin(),p.end());
        vector<long long>pref(m+1,0);
        for(int i=0;i<m;i++) pref[i+1]=pref[i]+p[i];
        
        vector<vector<int>>g(n+1);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        
        vector<int>da(n+1,-1),db(n+1,-1),dc(n+1,-1);
        bfs(a,g,da);
        bfs(b,g,db);
        bfs(c,g,dc);
        
        long long mtc=1e18;
        for(int x=1;x<=n;x++){
            if(da[x]==-1||db[x]==-1||dc[x]==-1) continue;
            int t=da[x]+db[x]+dc[x];
            if(t>m) continue;
            
            long long curr=pref[db[x]]+pref[t];
            mtc=min(mtc,curr);
        }
        cout<<mtc<<endl;
    }
    
 
    return 0;
}