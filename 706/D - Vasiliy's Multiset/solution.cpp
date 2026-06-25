#include <bits/stdc++.h>
using namespace std;
 
const int MAX=6000005;
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
    int maxor=0;
    for(int i=29;i>=0;i--){
        int bit=(x>>i)&1;
        int ob=1-bit;
        if(trie[curr][ob]!=0&&cnt[trie[curr][ob]]>0){
            maxor|=(1<<i);
            curr=trie[curr][ob];
        }else{
            curr=trie[curr][bit];
        }
}
        return maxor;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int q;
    cin>>q;
    insert(0);
    while(q--){
        char type;
        int x;
        cin>>type>>x;
        if(type=='+') insert(x);
        else if(type=='-') remove(x);
        else cout<<query(x)<<endl;
    }
    
    return 0;
}