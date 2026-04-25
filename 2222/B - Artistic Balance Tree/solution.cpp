#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>a(n);
        long long ts=0;
        for(int i=0;i<n;i++){
        cin>>a[i];
        ts+=a[i];    
        } 
        
        int cnto=0,cnte=0;
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            if(x%2) cnte++;
            else cnto++;
        }
        
        vector<long long>og,eg;
        for(int i=0;i<n;i++){
            if(i%2) og.push_back(a[i]);
            else eg.push_back(a[i]);
        }
        
        sort(og.rbegin(),og.rend());
        sort(eg.rbegin(),eg.rend());
        
        long long maxm=0;
        if(cnto){
            maxm+=og[0];
            int l=min((int)og.size(),cnto);
            for(int i=1;i<l;i++)
            if(og[i]>0) maxm+=og[i];
        }
        if(cnte){
            maxm+=eg[0];
            int l=min((int)eg.size(),cnte);
            for(int i=1;i<l;i++)
            if(eg[i]>0) maxm+=eg[i];
        }
        
        cout<<ts-maxm<<endl;
    }
}