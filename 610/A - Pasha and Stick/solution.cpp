// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    if(t&1) cout<<0<<endl;
    else{
        t/=2;
        cout<<(t-1)/2<<endl;
    }
    return 0;
}