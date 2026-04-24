#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int r,g,b;
        cin>>r>>g>>b;
        int counts[3] = {r, g, b};
        char color_chars[3] = {'R', 'G', 'B'};
       
        string s = "";
        int tsum = r+g+b;
        
        for(int i=0;i<tsum;i++){
            vector<int>valid;
            for(int c=0;c<3;c++){
            if(counts[c]==0) continue;
            if(i>=1 && s[i-1]==color_chars[c]) continue;
            if(i>=3 && s[i-3]==color_chars[c]) continue;
            valid.push_back(c);
        }
        if(valid.empty()) break;
        
        int maxcnt=0;
        for(int c: valid) {
            if(counts[c]>maxcnt) maxcnt=counts[c];
        }
        
        vector<int>best;
        for(int c:valid) {
            if(counts[c]==maxcnt)  best.push_back(c);
        }
        
        int chosen=best[0];
        
        if(i>=2){
            char prev2=s[i-2];
            for (int c: best) {
                if(color_chars[c]==prev2) {
                    chosen=c;
                    break;
                }
            }
        }
        s += color_chars[chosen];
        counts[chosen]--;
        }
        cout<<s<<endl;
    }
    
    return 0;
}