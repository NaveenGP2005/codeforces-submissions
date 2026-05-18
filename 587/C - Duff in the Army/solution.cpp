#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=100005;
vector<int>g[MAXN];
int up[MAXN][19],d[MAXN];
vector<int>top10[MAXN][19];
 
vector<int>mt(const vector<int>&a,const vector<int>&b){
    vector<int>res;
    for(int x:a) res.push_back(x);
    for(int x:b) res.push_back(x);
    
    sort(res.begin(),res.end());
    res.erase(unique(res.begin(),res.end()),res.end());
    
    if(res.size()>10) res.resize(10);
    
    
    return res;
}
 
void dfs(int u,int p,int h){
    up[u][0]=p; d[u]=h;
 
    for(int i=1;i<19;i++) {up[u][i]=up[up[u][i-1]][i-1];
    top10[u][i]=mt(top10[u][i-1],top10[up[u][i-1]][i-1]);
    }
 
    for(int v:g[u]){ 
    if(v!=p){ dfs(v,u,h+1);}
    }
}
 
 
vector<int> glca(int u,int v){
    vector<int>ans;
    if(d[u]<d[v]) swap(u,v);
    
    int diff=d[u]-d[v];
    for(int i=0;i<19;i++){
    if((diff>>i)&1){
    ans=mt(ans,top10[u][i]);    
    u=up[u][i];
    } 
    } 
    
    if(u==v){
        ans=mt(ans,top10[u][0]);
    return ans;
    } 
    
    for(int i=18;i>=0;i--){
        if(up[u][i]!=up[v][i]){
            ans=mt(ans,top10[u][i]);
            ans=mt(ans,top10[v][i]);
            u=up[u][i];
            v=up[v][i];
        }
    }
    ans=mt(ans,top10[u][0]);
    ans=mt(ans,top10[v][0]);
    ans=mt(ans,top10[up[u][0]][0]);
    return ans;
}
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n,m,q; cin>>n>>m>>q;
 
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=1;i<=m;i++){
        int c;
        cin>>c;
        if(top10[c][0].size()<10) top10[c][0].push_back(i);
    }
    dfs(1,1,0);
 
    while(q--){
        int u,v,a;
        cin>>u>>v>>a;
        
        vector<int>fl=glca(u,v);
        int k=min((int)fl.size(),a);
        cout<<k;
        for(int i=0;i<k;i++) cout<<" "<<fl[i];
        
        
        cout<<endl;
    }
    
    return 0;
}