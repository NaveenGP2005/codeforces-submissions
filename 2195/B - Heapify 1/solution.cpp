#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        bool changed=1,flag=1;
        
        while(changed){
            changed=0;
        for(int i=0;i<n;i++){
            int j=2*i+1;
            if(j<n&&a[i]>a[j]) {
                swap(a[i],a[j]);
                changed=1;
            }
        }
        }
        
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]) flag=0;
        }
        
        cout<<(!flag?"NO":"YES")<<endl;
 
    }
 
    return 0;
}