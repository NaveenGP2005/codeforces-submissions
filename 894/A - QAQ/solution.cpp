#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   string s;
   cin>>s;
   
   long long q=0,qa=0,qaq=0;
   for(char c:s){
       if(c=='Q'){
           qaq+=qa;
           q++;
       }
       else if(c=='A')qa+=q;
   }
   
   cout<<qaq<<endl;
   
    return 0;
}