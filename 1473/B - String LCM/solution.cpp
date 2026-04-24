// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
   int t;
   cin>>t;
   while(t--){
       string s,t;
       cin>>s>>t;
       long long L = (s.size() * t.size()) / __gcd((int)s.size(), (int)t.size());
       string sr="",tr="";
       for(int i=0;i<(L/s.length());i++) sr+=s;
       for(int i=0;i<(L/t.length());i++) tr+=t;
       if(sr==tr) cout<<sr<<endl;
       else cout<<"-1"<<endl;
   }
   return 0;
}