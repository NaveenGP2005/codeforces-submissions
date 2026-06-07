#include <bits/stdc++.h>
using namespace std;
 
/*
  a,b=a,n-a
  a=nmod12
  fahhhhhhhh
*/
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
     int t;
     cin>>t;
     while(t--){
         long long n;
         cin>>n;
         long long a;
         
         long long r=n%12;
         if(r<=9) a=r;
         if(r==10) a=22;
         if(r==11) a=11;
         
         if(n<a) cout<<-1<<endl;
         else cout<<a<<' '<<n-a<<endl;
         
     }
     
    return 0;
}
 
 