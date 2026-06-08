#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int T; cin>>T;
    while(T--){
        int n,m,t,u,v;
        cin>>n>>m;
 
        vector<vector<int>> g(n+1);
        vector<int> in(n+1),pos(n+1);
        vector<tuple<int,int,int>> e;
 
        for(int i=0;i<m;i++){
            cin>>t>>u>>v;
            e.push_back({t,u,v});
            if(t) g[u].push_back(v), in[v]++;
        }
 
        queue<int> q;
        for(int i=1;i<=n;i++) if(!in[i]) q.push(i);
 
        int r=0,cnt=0;
        while(!q.empty()){
            u=q.front(); q.pop();
            pos[u]=r++; cnt++;
 
            for(int v:g[u])
                if(--in[v]==0) q.push(v);
        }
 
        if(cnt<n){
            cout<<"NO
";
            continue;
        }
 
        cout<<"YES
";
 
        for(auto [t,u,v]:e){
            if(t) cout<<u<<" "<<v<<"
";
            else if(pos[u]<pos[v]) cout<<u<<" "<<v<<"
";
            else cout<<v<<" "<<u<<"
";
        }
    }
}