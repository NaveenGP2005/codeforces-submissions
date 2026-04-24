#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long c,msum;
        cin>>c>>msum;
        if(c>=msum) cout<<msum<<endl;
        else{
            long long r,s;
            s=msum/c;
            r=msum%c;
            cout<<r*(s+1)*(s+1)+(c-r)*(s)*s<<endl;
    }
    }
    return 0;
}