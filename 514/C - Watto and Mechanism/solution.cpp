#include<bits/stdc++.h>
using namespace std;
 
const int N=600005;
 
int t[N][3],cnt;
bool endd[N];
 
void add(string &s){
    int cur=0;
    for(char ch:s){
        int c=ch-'a';
        if(!t[cur][c]) t[cur][c]=++cnt;
        cur=t[cur][c];
    }
    endd[cur]=1;
}
 
bool dfs(int cur,int i,int k,string &q){
    if(i==q.size()) return k==0 && endd[cur];
 
    int c=q[i]-'a';
 
    for(int j=0;j<3;j++){
        if(!t[cur][j]) continue;
 
        if(j==c){
            if(dfs(t[cur][j],i+1,k,q)) return 1;
        }else if(k){
            if(dfs(t[cur][j],i+1,k-1,q)) return 1;
        }
    }
    return 0;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n,m;
    cin>>n>>m;
 
    while(n--){
        string s; cin>>s;
        add(s);
    }
 
    while(m--){
        string q; cin>>q;
        cout<<(dfs(0,0,1,q)?"YES
":"NO
");
    }
}