#include <bits/stdc++.h>
using namespace std;
 
const long long INF=1e18;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
     int n,m;
     cin>>n>>m;
     vector<vector<pair<int,int>>>g(n+1);
     for(int i=0;i<m;i++){
         int u,v,w;
         cin>>u>>v>>w;
         g[u].push_back({v,w});
         g[v].push_back({u,w});
     }
     
     vector<set<int>>b(n+1);
     for(int i=1;i<=n;i++){
         int k;
         cin>>k;
         for(int j=0;j<k;j++){
             int t;
             cin>>t;
             b[i].insert(t);
         }
     }
     
     vector<long long>d(n+1,INF);
     priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>>pq;
     d[1]=0;
     pq.push({0,1});
     while(pq.size()){
         auto [ct,u]=pq.top();
         pq.pop();
         
         if(ct>d[u]) continue;
         if(u==n) break;
         long long dt=ct;
         while(b[u].count(dt)) dt++;
         
         for(auto &e:g[u]){
             int v=e.first;
             int w=e.second;
             if(dt+w<d[v]){
                 d[v]=dt+w;
                 pq.push({d[v],v});
             }
         }
     }
     
     
     if(d[n]==INF) cout<<-1<<endl;
     else cout<<d[n]<<endl;
     
    return 0;
}
 
 