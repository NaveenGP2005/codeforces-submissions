#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    string s,ans;
    cin>>s;
    int f[3]={0};
    for(char c:s){
        if(c=='1') f[0]++;
        if(c=='2') f[1]++;
        if(c=='3') f[2]++;
    }
    for(int i=0;i<3;i++){
        while(f[i]--) {ans += char('0' + (i + 1));
            ans += '+';}
    }
    if(ans.size())
    ans.pop_back();
    cout<<ans<<endl;
    return 0;
}