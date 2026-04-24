#include<bits/stdc++.h>
using namespace std;
 
int t[2250005][26],cnt;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s,b;
    int k;
    cin>>s>>b>>k;
 
    int n=s.size(),ans=0;
 
    for(int i=0;i<n;i++){
        int cur=0,bad=0;
 
        for(int j=i;j<n;j++){
            int c=s[j]-'a';
 
            if(b[c]=='0') bad++;
            if(bad>k) break;
 
            if(!t[cur][c]){
                t[cur][c]=++cnt;
                ans++;
            }
 
            cur=t[cur][c];
        }
    }
 
    cout<<ans;
}