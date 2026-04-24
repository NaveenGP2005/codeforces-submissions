// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int>ans(k+1);
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++) cout<<"1 ";
        cout<<endl;
    }else if(k==1) cout<<"NO"<<endl;
    else if(k==2){
        if(n%2) cout<<"NO"<<endl;
        else {
            int sum=n;
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            while(sum){
                cout<<"2 ";
                sum-=2;
            }
            cout<<endl;
        }
    }
    else {
        if(n%2){
            cout<<"YES"<<endl;
            cout<<1+(n-3)/2<<endl<<"3 ";
            int sum=(n-3);
            while(sum){
                cout<<"2 ";
                sum-=2;
            }
            cout<<endl;
        }
        else{
            int sum=n;
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            while(sum){
                cout<<"2 ";
                sum-=2;
            }
            cout<<endl;
        }
    }
    }
   return 0;
}