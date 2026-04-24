// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool sort=1;
        
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                sort=0;
                break;
            }
        }
        cout<<(sort?n:1)<<endl;
    }
    return 0;
}