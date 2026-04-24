// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    long long n,p;
    cin>>n>>p;
    for(int k=1;k<=32;k++){
        long long v=n-(k*p);
        if(v>=k&&__builtin_popcountll(v)<=k) {
            cout<<k<<endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
   return 0;
}