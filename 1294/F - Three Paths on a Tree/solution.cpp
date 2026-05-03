#include <bits/stdc++.h>
using namespace std;
 
const int N = 2e5+5;
vector<int> g[N];
int d[N], p[N];
 
int bfs(int s, int n, bool par=0){
    fill(d, d+n+1, -1);
    queue<int> q; q.push(s); d[s]=0;
    int f=s;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v:g[u]) if(d[v]==-1){
            d[v]=d[u]+1;
            if(par) p[v]=u;
            q.push(v);
            if(d[v]>d[f]) f=v;
        }
    }
    return f;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n,u,v; cin>>n;
    for(int i=0;i<n-1;i++) cin>>u>>v, g[u].push_back(v), g[v].push_back(u);
 
    int a=bfs(1,n), b=bfs(a,n,1), dia=d[b];
 
    vector<int> path;
    for(int x=b;;x=p[x]){ path.push_back(x); if(x==a) break; }
 
    fill(d,d+n+1,-1);
    queue<int> q;
    for(int x:path) d[x]=0, q.push(x);
 
    int c=b,mx=0;
    while(!q.empty()){
        int u=q.front(); q.pop();
        for(int v:g[u]) if(d[v]==-1){
            d[v]=d[u]+1; q.push(v);
            if(d[v]>mx) mx=d[v], c=v;
        }
    }
 
    if(c==a||c==b) for(int i=1;i<=n;i++) if(i!=a&&i!=b){ c=i; break; }
 
    cout<<dia+mx<<"
"<<a<<" "<<b<<" "<<c;
}