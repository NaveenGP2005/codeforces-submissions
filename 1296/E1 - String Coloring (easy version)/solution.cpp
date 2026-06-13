#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<vector<int>>g(n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]>s[j]){
                g[i].push_back(j);
                g[j].push_back(i);
            }
        }
    }
    
    vector<int>c(n,-1);
    bool ip=1;
    for(int i=0;i<n;i++){
        if(c[i]==-1){
            queue<int>q;
            q.push(i);
            c[i]=0;
            
            while(q.size()){
                int u=q.front();
                q.pop();
                for(int v:g[u]){
                    if(c[v]==-1){
                        c[v]=1-c[u];
                        q.push(v);
                    }else if(c[v]==c[u]) ip=0;
                }
            }
        }
    }
    
    if(!ip) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++) cout<<c[i];
        cout<<endl;
    }
    
    return 0;
}