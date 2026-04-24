// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    if (s == "0") {
        cout << 0 << endl;
        return 0;
    }
    int cnt=0;
    int i=0;
    while(i<(int)s.length()){
        if(s[i++]=='1') cnt++;
    }
    int ans=s.length()/2;
    if (s.length() % 2 != 0 && cnt > 1) {
        ans++;
    }
    cout<<ans<<endl;
    return 0;
    }