#include <bits/stdc++.h>
using namespace std;
const long long MOD=1e9+7;
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
 
int get(char c){
    if(c>='a'&&c<='z') return c-'a';
    return c-'A'+26;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n,x,k;
    long long b;
    cin>>n>>b>>k>>x;
    vector<long long>cnt(10,0);
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        cnt[d]++;
    }
    
    Matrix t(x);
    for(int u=0;u<x;u++){
        for(int d=1;d<=9;d++){
            if(cnt[d]>0){
                int v=(u*10+d)%x;
                t.mat[u][v]=(t.mat[u][v]+cnt[d])%MOD;
            }
        }
    }
    
    Matrix res=pow(t,b);
    cout<<res.mat[0][k]<<endl;
    
    return 0;
}