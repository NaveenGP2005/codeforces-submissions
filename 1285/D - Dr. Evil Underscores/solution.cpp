#include <bits/stdc++.h>
using namespace std;
 
const int MAX=3000005;
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
 
int solve(int node,int bit){
    if(bit<0) return 0;
    int lc=trie[node][0];
    int rc=trie[node][1];
    if(lc!=0&&rc!=0) return (1<<bit)+min(solve(lc,bit-1),solve(rc,bit-1));
    else if(lc!=0) return solve(lc,bit-1);
    else if(rc!=0) return solve(rc,bit-1);
    
    return 0;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       int a;
       cin>>a;
       insert(a);
   }
   
   cout<<solve(1,29)<<endl;
    return 0;
}