// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const int MAXN = 200005;
const int MAX_VAL = 200005;
 
int spf[MAX_VAL];
int a[MAXN];
vector<int> adj[MAXN];
vector<pair<int, int>> memo[MAXN]; 
int global_max_path = 0;
 
void buildspf(){
    for(int i=2;i<MAXN;i++) spf[i]=i;
    for(int i=2;i*i<MAXN;i++){
        if(spf[i]==i){
            for(int j=i*i;j<MAXN;j+=i)
            if(spf[j]==j)
            spf[j]=i;
        }
    }
}
 
void dfs(int u,int parent){
    int temp=a[u];
    while(temp>1){
        int p=spf[temp];
        memo[u].push_back({p,1});
        global_max_path=max(global_max_path,1);
        
        while(temp%p==0) temp/=p;
    }
    
    for(int v:adj[u]){
        if(v==parent) continue;
        dfs(v,u);
        for(auto&up:memo[u]){
            for(auto&vp:memo[v]){
                if(up.first==vp.first){
                    global_max_path=max(global_max_path,up.second+vp.second);
                    up.second=max(vp.second+1,up.second);
                }
            }
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    buildspf();
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    cout<<global_max_path<<endl;
   return 0;
}