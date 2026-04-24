// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
   
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++) cin>>a[i];
       cout<<*max_element(a.begin(),a.end())<<endl;
   
   return 0;
}