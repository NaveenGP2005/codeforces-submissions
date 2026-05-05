#include <bits/stdc++.h>
using namespace std;
 
 
bool ok(char c){
    return c=='i'||c=='a'||c=='e'||c=='o'||c=='u';
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int ts=0;
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
        cin>>a[i];
        ts+=a[i];    
        } 
        if(ts==0) cout<<"NO"<<endl;
        else if(ts>0){
            cout<<"YES"<<endl;
            sort(a.rbegin(),a.rend());
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            
            cout<<endl;
        }else{
            cout<<"YES"<<endl;
            sort(a.begin(),a.end());
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            
            cout<<endl;
        }
        
    }
    return 0;
}