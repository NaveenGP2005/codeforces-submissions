// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,s;
    cin>>a>>b>>s;
    int mins=abs(a)+abs(b);
    if(s<mins) cout<<"NO"<<endl;
    else if((s-mins)%2!=0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
    }