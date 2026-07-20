#include <bits/stdc++.h>
using namespace std;
 
 
long long memo[20][4][2];
string s;
 
 
long long cal(int pos,int cnt,int tight){
    if(cnt>3) return 0;
    if(s.length()==pos) return 1;
    
    if(memo[pos][cnt][tight]!=-1) return memo[pos][cnt][tight];
    
    int l=tight?s[pos]-'0':9;
    long long ans=0;
    for(int d=0;d<=l;d++){
        int ncnt=cnt+(d>0?1:0);
        int ntight=tight&&(d==l);
        ans+=cal(pos+1,ncnt,ntight);
    }
    
    return memo[pos][cnt][tight]=ans;
}
 
long long solve(long long n){
    if(n<0) return 0;
    s=to_string(n);
    memset(memo,-1,sizeof(memo));
    return cal(0,0,1);
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   int t;cin>>t;
   while(t--){
       long long l,r;
       cin>>l>>r;
       cout<<solve(r)-solve(l-1)<<endl;
   }
    return 0;
}