// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
const long long MOD=1e9+7;
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int m=1<<n;
    for(int i=0;i<m;i++){
    int cnt=0;
        for(int j=0;j<n;j++){
            if((1<<j)&i) cnt+=a[j];
            else cnt-=a[j];
        }
        if(cnt%360==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
   return 0;
}