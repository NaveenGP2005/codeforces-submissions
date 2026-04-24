// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
 
int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       string s;
       cin>>s;
       
       vector<int>indices;
       for(int i=0;i<n;i++)
       if(s[i]=='1') 
       indices.push_back(i);
       
       if(indices.empty()) {
           cout<<"0 0"<<endl;
       }
       else{
       int mincnt=0,maxcnt=0;
       int lastidx=indices[0],firstidx=indices[0];
       for(int i=1;i<indices.size();i++){
       if(indices[i]-indices[i-1]>=3){
           int l=lastidx-firstidx+1;
           maxcnt+=l;
           mincnt+=((l/2)+1);
           firstidx=indices[i];
       }
       lastidx=indices[i];
       }
       
       int l=lastidx-firstidx+1;
       maxcnt+=l;
       mincnt+=((l/2)+1);
       cout<<mincnt<<" "<<maxcnt<<endl;
       }
   }
   return 0;
}