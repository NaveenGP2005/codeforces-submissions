#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string p,h,n;
        cin>>p>>h;
        sort(p.begin(),p.end());
        bool flag=0;
        for(int i=0;i<h.size();i++){
            n=h.substr(i,p.size());
            sort(n.begin(),n.end());
            if(n==p) {
                flag=1;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<endl;
    }
    return 0;
}