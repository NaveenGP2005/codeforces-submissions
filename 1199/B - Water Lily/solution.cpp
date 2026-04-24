// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main() {
    double h,l,ans;
    cin>>h>>l;
    ans=(((l*l)-(h*h))/(2.0*h));
    cout<<fixed<<setprecision(13)<<ans<<endl;
    return 0;
    }