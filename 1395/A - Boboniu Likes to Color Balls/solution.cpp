// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int t;
   cin >> t;
   while(t--) {
       int r, g, b, w;
       cin >> r >> g >> b >> w;
       
       int ans = (r%2) + (g%2) + (b%2) + (w%2);
       if(ans <= 1) {
           cout << "YES" << endl;
           continue; 
       }
       if(r > 0 && g > 0 && b > 0) {
           r--, g--, b--, w += 3;
           ans = (r%2) + (g%2) + (b%2) + (w%2);
           
           if(ans <= 1) {
               cout << "YES" << endl;
           } else {
               cout << "NO" << endl;
           }
       } else {
           cout << "NO" << endl;
       }
   }
   return 0;
}