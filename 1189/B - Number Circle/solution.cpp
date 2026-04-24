// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
   long long n;
   cin>>n;
   vector<long long>a(n);
   for(int i=0;i<n;i++) cin>>a[i];
   sort(a.begin(),a.end());
    if(a[n-3]+a[n-2] <=a[n-1])cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<a[n-1]<<" ";
        for(int i=n-3;i>=0;i-- )cout<<a[i]<<" ";
        cout<<a[n-2]<<endl;
    }
   
   
   return 0;
}