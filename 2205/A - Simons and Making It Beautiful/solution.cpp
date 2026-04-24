#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1),pos(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pos[a[i]]=i;
        }
        
        int prefmax=0,prefidx=-1;
        for(int i=1;i<=n;i++){
            prefmax=max(prefmax,a[i]);
            if(prefmax==i){
                prefidx=i;
                break;
            }
        }
        
        if(prefidx==-1){
        for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
        
        cout<<endl;
        continue;
        }
        
            swap(a[pos[prefidx]],a[pos[n]]);
            for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
            
            cout<<endl;
        
    }
    return 0; 
    
}