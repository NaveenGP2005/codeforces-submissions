#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s,ans;
    cin>>s;
    int i=0,k=1;
    while(i<s.size()){
        ans+=s[i];
        i+=k++;
    }
    cout<<ans<<endl;
    return 0;
}