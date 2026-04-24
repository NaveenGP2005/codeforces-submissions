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
        
        int ans=*max_element(a.begin(),a.end());
        int cnt=0;
        for(int i=0;i<n;i++)
        if(ans==a[i]) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}