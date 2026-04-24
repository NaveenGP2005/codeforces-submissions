#include <bits/stdc++.h>
using namespace std;
 
int digisum(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        if(s.length()==1){
            cout<<s<<endl;
            continue;
        }
        else{
            int tsum=0;
            vector<int>cnt(10,0);
            for(char c:s){
                tsum+=(c-'0');
                cnt[c-'0']++;
            }
            
            for(int x2=1;x2<=tsum;x2++){
                int curr=x2,currsum=curr;
                string t=to_string(curr);
                
                while(curr>9){
                    curr=digisum(curr);
                    currsum+=curr;
                    t+=to_string(curr);
                }
                currsum+=curr;
                
                
                
                if(currsum==tsum){
                    vector<int>temp=cnt;
                    bool ok=1;
                    for(char c:t){
                        if(--temp[c-'0']<0){
                            ok=0;
                            break;
                        }
                    }
                    if(ok){
                        string x1="";
                        for(int d=1;d<=9;d++){
                            if(temp[d]>0){
                                x1+=to_string(d); 
                                temp[d]--; 
                                break; 
                            }
                        }
                        for(int d=0;d<=9;d++){
                            x1+=string(temp[d],d+'0');
                        }
                        cout<<x1<<t<<endl;
                        break; 
                    }
                }
            }
        }
    }
    return 0;
}