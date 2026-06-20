#include <bits/stdc++.h>
using namespace std;
 
/*
const long long MOD=100000007;
struct Matrix{
    int sz;
    vector<vector<long long>>mat;
    Matrix(int sz):sz(sz){
        mat.assign(sz,vector<long long>(sz,0));
    }
};
 
Matrix mul(Matrix a,Matrix b){
    Matrix res(a.sz);
    for(int i=0;i<a.sz;i++){
            for(int k=0;k<a.sz;k++){
                if(a.mat[i][k]==0) continue;
        for(int j=0;j<a.sz;j++){
                res.mat[i][j]=(res.mat[i][j]+(a.mat[i][k]*b.mat[k][j])%MOD)%MOD;
            }
        }
    }
    return res;
}
 
Matrix pow(Matrix a,long long p){
    Matrix res(a.sz);
    for(int i=0;i<a.sz;i++) res.mat[i][i]=1;
    
    while(p){
        if(p%2==1) res=mul(res,a);
        a=mul(a,a);
        p/=2;
    }
    return res;
}
*/
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n,t;
    cin>>n>>t;
    vector<int>a(n),cnt(305,0);
    int maxf=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
        maxf=max(maxf,cnt[a[i]]);
    }
    
    vector<int>b;
    int l=min(n,t);
    for(int i=0;i<l;i++){
        for(int j=0;j<n;j++){
            b.push_back(a[j]);
        }
    }
    
    vector<int>dp(305,0);
    for(auto x:b){
        int best=0;
        for(int i=1;i<=x;i++) best=max(best,dp[i]);
        dp[x]=best+1;
    }
    
    
    int ans=0;
    for(int i=1;i<=300;i++) ans=max(ans,dp[i]);
    
    if(t>n) ans+=(t-n)*maxf;
    cout<<ans<<endl;
    
    return 0;
}