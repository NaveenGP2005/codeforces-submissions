// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
   
       int n;
       cin>>n;
       while(n--){
           int a,b,c;
           cin>>a>>b>>c;
           string x = "1" + string(a - 1, '0');
string y = string(b - c + 1, '1') + string(c - 1, '0');
cout << x << " " << y << endl;
       }
   
   return 0;
}