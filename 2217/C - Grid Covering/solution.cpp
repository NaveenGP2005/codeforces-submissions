#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; 
    cin>>t;
    while (t--) {
        long long n,m,a,b;
        cin>>n>>m>>a>>b;
        
        if(gcd(a,n)==1&&gcd(b,m)==1&&(2*lcm(m,n)>=m*n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}