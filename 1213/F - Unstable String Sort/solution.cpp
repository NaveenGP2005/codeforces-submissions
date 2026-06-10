#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n,k;
    cin>>n>>k;
    vector<int>p(n),q(n);
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) cin>>q[i];
    
    
    vector<int>f(n+1,0);
    int unmatch=0;
    int blocks=0;
    
    string ans(n,'a');
    char curr='a';
    for(int i=0;i<n;i++){
        ans[p[i]-1]=curr;
        if(f[p[i]]==0) unmatch++;
        f[p[i]]++;
        if(f[p[i]]==0) unmatch--;
        
        if(f[q[i]]==0) unmatch++;
        f[q[i]]--;
        if(f[q[i]]==0) unmatch--;
        
        if(unmatch==0){
        blocks++;
        
        if(curr<'z') curr++;    
        } 
    }
    
    
    if(blocks>=k) cout<<"YES"<<endl<<ans<<endl;
    else cout<<"NO"<<endl;
    
 
    return 0;
}