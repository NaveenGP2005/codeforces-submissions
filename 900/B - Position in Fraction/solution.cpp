#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     
     long long a,b,c;
     cin>>a>>b>>c;
     long long rem=a%b;
     for(int i=0;i<1e5;i++){
         rem*=10;
         long long d=rem/b;
         if(d==c) {
             cout<<i+1<<endl;
             return 0;
         }
         rem%=b;
     }
     cout<<"-1"<<endl;
    return 0;
}