#include <bits/stdc++.h>
using namespace std;
 
const int MAX=9000005;
int trie[MAX][2];
int cnt[MAX];
int ncnt=1;
 
void insert(int x){
    int curr=1;
    for(int i=29;i>=0;i--){
        int bit=(x>>i)&1;
        if(trie[curr][bit]==0){
            trie[curr][bit]=++ncnt;
        }
        
        curr=trie[curr][bit];
        cnt[curr]++;
    }
}
 
void remove(int x){
    int curr=1;
    for(int i=29;i>=0;i--){
        int bit=(x>>i)&1;
        curr=trie[curr][bit];
        cnt[curr]--;
    }
}
 
int query(int x){
    int curr=1;
    int best=0;
    for(int i=29;i>=0;i--){
        int bit=(x>>i)&1;
        if(trie[curr][bit]!=0&&cnt[trie[curr][bit]]>0){
            best|=(bit<<i);
            curr=trie[curr][bit];
        }else{
            int ob=1-bit;
            best|=(ob<<i);
            curr=trie[curr][ob];
        }
}
        return best;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   /*int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        insert(p);
    }
    
    for(int i=0;i<n;i++){
        int best=query(a[i]);
        cout<<(a[i]^best)<<(i==n-1?"":" ");
        remove(best);
    }
    cout<<endl;*/
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,maxlen=0;
        for(int i=0;i<s.length();i++){
        if(s[i]=='#') {
            cnt++;
            maxlen=max(maxlen,cnt);
        }
        else cnt=0;
            
        }
        
        
        cout<<(maxlen+1)/2<<endl;
    }
    
    return 0;
}