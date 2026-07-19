#include <bits/stdc++.h>
using namespace std;
 
const int MAX=30000005;
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
 
long long query(int x,int k){
    int curr=1;
    long long vs=0;
    for(int i=29;i>=0;i--){
        if(curr==0) break;
        int bitx=(x>>i)&1;
        int bitk=(k>>i)&1;
        
        if(bitk==0){
            int op=1-bitx;
            if(trie[curr][op]!=0) vs+=cnt[trie[curr][op]];
            curr=trie[curr][bitx];
        }else{
            int op=1-bitx;
            curr=trie[curr][op];
        }
}
        if(cnt!=0)
        vs+=cnt[curr];
        return vs;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long ans=0;
    int currprefxor=0;
    insert(0);
    
    for(int i=0;i<n;i++){
        currprefxor^=a[i];
        ans+=query(currprefxor,k);
        insert(currprefxor);
    }
    
    cout<<ans<<endl;
    return 0;
}