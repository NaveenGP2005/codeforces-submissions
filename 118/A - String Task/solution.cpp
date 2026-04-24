#include <iostream>
#include<vector>
using namespace std;
 
int main(){
    string s,ans="";
    cin>>s;
    for(char c:s){
        if(c>='A'&&c<='Z') c=c-'A'+'a';
        if(c=='A'||c=='y'||c=='a'||c=='E'||c=='e'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
            continue;
        }
        ans+='.';
        ans+=c;
    }
    cout<<ans<<endl;
    return 0;
}