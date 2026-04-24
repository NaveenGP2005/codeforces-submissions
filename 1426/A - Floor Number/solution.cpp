#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int p,x,idx;
        cin>>p>>x;
        if(p<=2) cout<<"1"<<endl;
        else cout<<1+(p-2+x-1)/x<<endl;
    }
    return 0;
}