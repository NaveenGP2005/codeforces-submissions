#include <bits/stdc++.h>
using namespace std;
 
 
bool ok(char c){
    return c=='i'||c=='a'||c=='e'||c=='o'||c=='u';
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length()) {cout<<"NO"<<endl;return 0;}
  
        for(int i=0;i<s.length();i++){
            if(ok(s[i])!=ok(t[i])){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    
    cout<<"YES"<<endl;
    return 0;
}