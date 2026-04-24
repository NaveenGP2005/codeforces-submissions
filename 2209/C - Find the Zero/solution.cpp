#include <bits/stdc++.h>
using namespace std;
 
int ask(int i,int j){
    cout<<"? "<<i<<" "<<j<<endl;
    
    int res;
    cin>>res;
    if(res==-1) exit(0);
    
    return res;
}
 
 
int main() {
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         if(ask(1,2)==1){
             cout<<"! 1"<<endl;
             continue;
         }
         else if(ask(2,3)==1){
             cout<<"! 2"<<endl;
             continue;
         }
         else if(ask(1,3)==1){
             cout<<"! 3"<<endl;
             continue;
         }
         else{
             bool ok=0;
             
             
             
             for(int i=4;i<2*n;i+=2){
                 if(ask(i,i+1)==1){
                     cout<<"! "<<i<<endl;
                     ok=1;
                     break;
                 }
             }
             
             
             
             
             if(!ok) cout<<"! "<<2*n<<endl;
         }
    }
    return 0;
}