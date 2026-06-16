#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<vector<int>>g(n+1);
        vector<int>indeg(n+1,0);
        for(int i=1;i<=n;i++){
            int k;
            cin>>k;
            for(int j=0;j<k;j++){
            int u;
            cin>>u;
            g[u].push_back(i);
            indeg[i]++;
            }
        }
    
    
    queue<int>q;
    vector<int>pass(n+1,1);
    for(int i=1;i<=n;i++){
        if(indeg[i]==0) q.push(i);
    }
    
    int cnt=0;
    int tot=0;
    while(q.size()){
        int u=q.front();
        q.pop();
        cnt++;
        tot=max(tot,pass[u]);
        for(int v:g[u]){
            indeg[v]--;
            if(u>v) pass[v]=max(pass[v],pass[u]+1);
            else pass[v]=max(pass[v],pass[u]);
            
            if(indeg[v]==0) q.push(v);
        }
    }
    
    if(cnt<n) cout<<-1<<endl;
    else cout<<tot<<endl;
    }
    return 0;
}