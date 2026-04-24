#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    
    vector<int>lps(s.length(),0);
    int pre=0,suf=1;
    while(suf<s.length()){
        if(s[pre]==s[suf]){
            lps[suf]=pre+1;
            pre++,suf++;
        }else{
            if(pre==0){
                lps[suf++]=0;
            }
            else pre=lps[pre-1];
        }
    }
    
    
    vector<int>cnt(s.length()+1,1);
    for(int i=s.length();i>=1;i--) cnt[lps[i-1]]=cnt[lps[i-1]]+cnt[i];
    
    vector<int> val;
    int len=s.length();
    while(len){
        val.push_back(len);
        len=lps[len-1];
    }
    
    reverse(val.begin(),val.end());
    cout<<val.size()<<endl;
    for(int c:val){
        cout<<c<<" "<<cnt[c]<<endl;
    }
    
    return 0;
}