#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    int pre=1;
    int limit=min(n,k);
    
    for(int i=1;i<limit;i++){
        char ex=s[i%pre];
        if(s[i]<ex) pre=i+1;
        else if(s[i]>ex) break;
    }
    
    string match=s.substr(0,pre);
    string ans="";
    while(ans.length()<k){
        ans+=match;
    }
    
    cout<<ans.substr(0,k)<<endl;
    return 0;
}