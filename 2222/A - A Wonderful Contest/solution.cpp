#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),v(n);
        for(int i=0;i<n;i++){
        cin>>a[i];
        v[i]=100/a[i];    
        } 
        sort(v.begin(),v.end());
        
        int reach=0;
        bool ok=1;
        for(int i=0;i<n;i++){
            if(v[i]>reach+1) {
                ok=0;
                break;
            }
            
            reach+=100;
        }
        cout<<(ok?"Yes":"No")<<endl;
    }
}