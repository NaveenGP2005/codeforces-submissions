#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int sum=a+b+c+d;
        if(sum%3==0&&a<=sum/3&&b<=sum/3&&c<=sum/3) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}