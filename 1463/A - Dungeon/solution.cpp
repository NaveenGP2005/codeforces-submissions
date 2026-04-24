// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
   int t;
   cin>>t;
   while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       int sum=a+b+c;
       int k=sum/9;
       if(sum%9==0&&(min(a,min(b,c))>=k)) cout<<"Yes"<<endl;
       else cout<<"NO"<<endl;
   }
   return 0;
}