#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
        int f=-1,l=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') {f=i;break;}
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                l=i;break;
            }
        }
        int cnt=0;
        if(f!=-1&&l!=-1){
            for(int i=f;i<=l;i++) {
            if(s[i]=='0') cnt++;}
        }
        cout<<cnt<<endl;
    }
 
    return 0;
}