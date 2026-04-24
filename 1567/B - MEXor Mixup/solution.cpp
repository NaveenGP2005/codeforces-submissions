// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int computeXOR(int n) {
    if (n < 0) return 0;
    int mod = n % 4;
    if (mod == 0) return n;
    if (mod == 1) return 1;
    if (mod == 2) return n + 1;
    return 0; 
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long mex,xxor,txor=0;
        cin>>mex>>xxor;
        txor=computeXOR(mex-1);
        if(txor==xxor){
            cout<<mex<<endl;
        }
        else if((txor^xxor)==mex) cout<<mex+2<<endl;
        else cout<<mex+1<<endl;
    }
   return 0;
}