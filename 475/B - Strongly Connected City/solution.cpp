#include <bits/stdc++.h>
using namespace std;
int n,m;
string h,v;
bool vis[25][25];
 
int dfs(int r,int c){
    if(r<0||r>=n||c<0||c>=m) return 0;
    
    if(vis[r][c]) return 0;
    vis[r][c]=1;
    int cnt=1;
    if(h[r]=='>') cnt+=dfs(r,c+1);
    else cnt+=dfs(r,c-1);
    
    
    if(v[c]=='v') cnt+=dfs(r+1,c);
    else cnt+=dfs(r-1,c);
    
    return cnt;
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    cin>>h>>v;
    bool istrong=1;
    
    for(int r=0;r<n;r++){
        for(int c=0;c<m;c++){
            memset(vis,0,sizeof(vis));
            
            if(dfs(r,c)!=n*m){
                istrong=0;
                break;
            }
        }
        if(!istrong) break;
    }
    
    if(istrong) cout<<"YES
";
    else cout<<"NO
";
    
    return 0;
}
 
 