#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=100005;
vector<int>g[MAXN];
bool hasboss[MAXN];
int tin[MAXN],tout[MAXN];
int timer=0;
int parn[MAXN],rnk[MAXN];
 
void ms(int v){
    parn[v]=v;
    rnk[v]=0;
}
 
int fs(int v){
    if(v==parn[v]) return v;
    return parn[v]=fs(parn[v]);
}
 
bool us(int a,int b){
    a=fs(a);
    b=fs(b);
    if(a!=b){
        if(rnk[a]<rnk[b]) swap(a,b);
        parn[b]=a;
        if(rnk[a]==rnk[b]) rnk[a]++;
        return 1;
    }
    return 0;
}
 
 
 
 
void dfs(int u){
    tin[u]=++timer;
    for(int v:g[u]){
        dfs(v);
    }
    tout[u]=++timer;
}
 
bool isa(int u,int v){
    return tin[u]<=tin[v]&& tout[u]>=tout[v];
}
 
 
struct Event{
    int type,u,v;
};
 
int doc[MAXN];
vector<pair<int,int>>q[MAXN];
int ans[MAXN];
 
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n,m; cin>>n>>m;
    vector<Event>e(m);
    int dcnt=0,qcnt=0;
    for(int i=0;i<m;i++){
        cin>>e[i].type;
        if(e[i].type==1){
            cin>>e[i].u>>e[i].v;
            g[e[i].v].push_back(e[i].u);
            hasboss[e[i].u]=1;
        }
        else if(e[i].type==2){
            cin>>e[i].u;
            dcnt++;
            doc[dcnt]=e[i].u;
        }
        else{
            cin>>e[i].u>>e[i].v;
            q[e[i].v].push_back({e[i].u,qcnt});
            qcnt++;
        }
    }
    
    for(int i=1;i<=n;i++)
    if(!hasboss[i]) 
    dfs(i);
    
    
    for(int i=1;i<=n;i++) ms(i);
    
    
    dcnt=0;
    
    for(int i=0;i<m;i++){
        if(e[i].type==1) us(e[i].u,e[i].v);
        else if(e[i].type==2){
            dcnt++;
            int creator=doc[dcnt];
            for(auto qu:q[dcnt]){
                int x=qu.first;
                int idx=qu.second;
                
                if(isa(x,creator)&&fs(x)==fs(creator)){
                    ans[idx]=1;
                }
                else{
                    ans[idx]=0;
                }
            }
        }
    }
    
    
    for(int i=0;i<qcnt;i++) {
        if(ans[i]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}