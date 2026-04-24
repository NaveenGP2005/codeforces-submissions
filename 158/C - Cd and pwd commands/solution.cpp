#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int t;
     cin>>t;
         vector<string>path;
     while(t--){
         string cmd;
         cin>>cmd;
         if(cmd=="pwd"){
             cout<<'/';
             for(string c:path) cout<<c<<'/';
             cout<<endl;
         }
         else if(cmd=="cd"){
             string s;
             cin>>s;
             if(s[0]=='/') path.clear();
             
             string token="";
             s+='/';
             for(int i=0;i<s.size();i++){
                 if(s[i]=='/'){
                     if(token==""){}
                     else if(token=="..") {
                         if(!path.empty()) path.pop_back();
                     }
                     else path.push_back(token);
                     
                     token="";
                 }
                 else token+=s[i];
             }
         }
     }
    return 0;
}