#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s;
    cin>>s;
 
    int n=s.size();
    vector<int> d(n+1);
 
    unsigned long long h=0,r=0,p=1;
    const unsigned long long B=131;
 
    long long ans=0;
 
    for(int i=0;i<n;i++){
        h=h*B+s[i];
        r=r+s[i]*p;
        p*=B;
 
        int len=i+1;
 
        if(h==r) d[len]=d[len/2]+1;
        else d[len]=0;
 
        ans+=d[len];
    }
 
    cout<<ans;
}