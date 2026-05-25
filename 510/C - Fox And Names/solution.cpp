#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    vector<string>names(n);
    for(int i=0;i<n;i++) cin>>names[i];
    
    vector<vector<int>>g(26);
    vector<int>indeg(26,0);
    
    for(int i=0;i<n-1;i++){
        string w1=names[i];
        string w2=names[i+1];
        int len=min(w1.length(),w2.length());
        bool flag=0;
        
        for(int j=0;j<len;j++){
            if(w1[j]!=w2[j]){
                int u=w1[j]-'a';
                int v=w2[j]-'a';
                g[u].push_back(v);
                indeg[v]++;
                flag=1;
                break;
            }
        }
        
        
        if(!flag&&(w1.length()>w2.length())){
            cout<<"Impossible"<<endl;
            return 0;
        }
    }
    
    
    queue<int>q;
    string ans="";
    for(int i=0;i<26;i++)
    if(indeg[i]==0)
    q.push(i);
    
    while(q.size()){
        int u=q.front();q.pop();
        ans+=(char)(u+'a');
        for(int v:g[u]){
            indeg[v]--;
            if(indeg[v]==0)
            q.push(v);
        }
    }
    
    if(ans.length()==26) cout<<ans<<endl;
    else cout<<"Impossible"<<endl;
    
    
    return 0;
}
 
 