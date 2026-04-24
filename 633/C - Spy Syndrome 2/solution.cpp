#include<bits/stdc++.h>
using namespace std;
 
const int N=1000005;
 
int t[N][26],id[N],cnt;
 
void add(string &s,int i){
    int cur=0;
    for(char ch:s){
        int c=tolower(ch)-'a';
        if(!t[cur][c]) t[cur][c]=++cnt;
        cur=t[cur][c];
    }
    id[cur]=i;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n,m;
    cin>>n;
 
    string s;
    cin>>s;
 
    cin>>m;
 
    vector<string> d(m+1);
    for(int i=1;i<=m;i++){
        cin>>d[i];
        add(d[i],i);
    }
 
    vector<int> prev(n+1,-1),used(n+1);
    vector<bool> dp(n+1);
    dp[0]=1;
 
    for(int i=1;i<=n;i++){
        int cur=0;
 
        for(int j=i-1;j>=max(0,i-1000);j--){
            int c=s[j]-'a';
            if(!t[cur][c]) break;
 
            cur=t[cur][c];
 
            if(id[cur] && dp[j]){
                dp[i]=1;
                prev[i]=j;
                used[i]=id[cur];
                break;
            }
        }
    }
 
    vector<string> ans;
    for(int i=n;i>0;i=prev[i])
        ans.push_back(d[used[i]]);
 
    reverse(ans.begin(),ans.end());
 
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<(i+1==ans.size()?"":" ");
}