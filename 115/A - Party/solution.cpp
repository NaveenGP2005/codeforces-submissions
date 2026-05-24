#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin>>n;
    
    vector<int>a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    
    int ans=0;
    for(int i=1;i<=n;i++){
        int curr=i,cd=0;
        while(curr!=-1){
            cd++;
            curr=a[curr];
        }
        
        
        ans=max(ans,cd);
    }
    
    
    cout<<ans;
}