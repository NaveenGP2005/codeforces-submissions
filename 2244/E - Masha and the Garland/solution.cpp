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
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       
       vector<int>p(n+1,0);
       for(int i=2;i<=n;i++) p[i]=p[i-1]+(s[i-1]==s[i-2]);
       
       for(int i=0;i<q;i++){
           int l,r,k;
           cin>>l>>r>>k;
           
           int err=p[r]-p[l];
           int tot=(err+1)/2;
           if(tot<=k) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
        
    }
    
    return 0;
}