#include <bits/stdc++.h>
using namespace std;
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long cnt=0;
        for(int i=0;i<n;i++){
        if(s[i]=='L'){
        cout<<i+1<<endl;
        break;
        }
        }
     }
    return 0;
}