#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        set<int>b;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            b.insert(a[i]);
        }
        
        if(b.size()==n){
            sort(a.rbegin(),a.rend());
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}