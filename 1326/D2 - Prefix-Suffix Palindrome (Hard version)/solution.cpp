#include <bits/stdc++.h>
using namespace std;
 
 int Lps(string s) {
     string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    string t = s + "#" + rev_s;
               vector<int>lps(t.size(),0);
        int pre=0,suf=1;
        while(suf<t.size()){
            if(t[pre]==t[suf]){
                lps[suf]=pre+1;
                pre++,suf++;
            }
            else{
                if(pre==0){
                    lps[suf]=0;
                    suf++;
                }
                else{
                    pre=lps[pre-1];
                }
            }
        }
       return lps.back();
    }
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int l=0,r=s.length()-1;
        while(l<r&&s[l]==s[r]){
            l++,r--;
        }
        if(l>=r){
            cout<<s<<endl;
            continue;
        }
        else{
            string left=s.substr(0,l),right=s.substr(r+1);
            string mid=s.substr(l,r-l+1);
            int pal=Lps(mid);
            string revmid=mid;
            reverse(revmid.begin(),revmid.end());
            
            int lensuf=Lps(revmid);
            if(pal>lensuf){
                cout<<left<<mid.substr(0,pal)<<right<<endl;
                continue;
            }
            else{
                cout<<left<<mid.substr(mid.length()-lensuf)<<right<<endl;
                continue;
            }
        }
    }
    return 0;
}