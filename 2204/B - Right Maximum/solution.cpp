#include <bits/stdc++.h>
using namespace std;
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
     while(t--){
        int n,cnt=0,maxelem=-1;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>=maxelem){
                cnt++;
                maxelem=x;
            }
        }
        cout<<cnt<<endl;
     }
    return 0;
}