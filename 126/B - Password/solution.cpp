#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int n=s.length();
    vector<int>lps(n,0);
    int pre=0,suf=1;
    int maxm=0;
    while(suf<n){
        if(s[pre]==s[suf]){
            lps[suf]=pre+1;
            
            if(suf<n-1) maxm=max(maxm,lps[suf]);
            pre++,suf++;
        }else{
            if(pre==0){
                lps[suf++]=0;
            }else{
                pre=lps[pre-1];
            }
        }
    }
    
    int len=lps[n-1];
    if(len==0){
        cout<<"Just a legend"<<endl;
        return 0;
    }
    
    if(maxm>=len){
        cout<<s.substr(0,len)<<endl;
        return 0;
    }
    else{
        len=lps[len-1];
        if(len>0) cout<<s.substr(0,len)<<endl;
        else cout<<"Just a legend"<<endl;
    }
    
}