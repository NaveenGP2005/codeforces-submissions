#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2) odd++;
            else even++;
        }
        if(odd==0) cout<<"NO"<<endl;
        else if(even==0&&n%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}