#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=200005;
vector<pair<int,int>>g[MAXN];
int up[MAXN][19],d[MAXN];
int maxwt[MAXN][19];
int parn[MAXN],rnk[MAXN];
 
struct Edge{
    int u,v,w,id;
    bool operator<(const Edge&other)const{
        return w<other.w;
    }
};
 
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
 
 
void dfs(int u,int p,int h,int w){
    up[u][0]=p; d[u]=h; maxwt[u][0]=w;
 
    for(int i=1;i<19;i++) {up[u][i]=up[up[u][i-1]][i-1];
    maxwt[u][i]=max(maxwt[u][i-1],maxwt[up[u][i-1]][i-1]);
    }
 
    for(auto e:g[u]){ 
        int v=e.first;
        int weight=e.second;
    if(v!=p){ dfs(v,u,h+1,weight);}
    }
}
 
 
int gme(int u,int v){
    int ans=0;
    if(d[u]<d[v]) swap(u,v);
    
    int diff=d[u]-d[v];
    for(int i=0;i<19;i++){
    if((diff>>i)&1){
    ans=max(ans,maxwt[u][i]);    
    u=up[u][i];
    } 
    } 
    
    if(u==v){
    return ans;
    } 
    
    for(int i=18;i>=0;i--){
        if(up[u][i]!=up[v][i]){
            ans=max(ans,maxwt[u][i]);
            ans=max(ans,maxwt[v][i]);
            u=up[u][i];
            v=up[v][i];
        }
    }
    ans=max(ans,maxwt[u][0]);
    ans=max(ans,maxwt[v][0]);
    return ans;
}
 
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
 
    int n,m; cin>>n>>m;
    vector<Edge>e(m);
    vector<Edge>oge(m);
    for(int i=0;i<m;i++){
        cin>>e[i].u>>e[i].v>>e[i].w;
        e[i].id=i;
        oge[i]=e[i];
    }
    
    sort(e.begin(),e.end());
    for(int i=1;i<=n;i++) ms(i);
    
    long long bmst=0;
    vector<bool>inmst(m,0);
    
    
    for(int i=0;i<m;i++){
        if(us(e[i].u,e[i].v)){
            bmst+=e[i].w;
            inmst[e[i].id]=1;
            
            g[e[i].u].push_back({e[i].v,e[i].w});
            g[e[i].v].push_back({e[i].u,e[i].w});
        }
    }
    dfs(1,1,0,0);
 
    for(int i=0;i<m;i++){
        if(inmst[i]){
            cout<<bmst<<endl;
        }else{
            int u=oge[i].u,v=oge[i].v,w=oge[i].w;
            int maxcyclee=gme(u,v);
            cout<<bmst-maxcyclee+w<<endl;
        }
    }
    
    return 0;
}