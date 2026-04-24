#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll lcm(ll a,ll b){
    return a/__gcd(a,b)*b;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll ab=lcm(a,b);
        ll ac=lcm(a,c);
        ll bc=lcm(b,c);
        ll abc=lcm(ab,c);
 
 
//set theory
        ll onlyA=m/a-m/ab-m/ac+m/abc;
        ll onlyB=m/b-m/ab-m/bc+m/abc;
        ll onlyC=m/c-m/ac-m/bc+m/abc;
        ll AB=m/ab-m/abc;
        ll AC=m/ac-m/abc;
        ll BC=m/bc-m/abc;
        ll ABC=m/abc;
        ll alice=onlyA*6+AB*3+AC*3+ABC*2;
        ll bob=onlyB*6+AB*3+BC*3+ABC*2;
        ll carol=onlyC*6+AC*3+BC*3+ABC*2;
        cout<<alice<<" "<<bob<<" "<<carol<<endl;
    }
}