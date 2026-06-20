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
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    long long n;
    int m;
    cin>>n>>m;
    if(n<m) {
        cout<<1<<endl;
        return 0;
    }
    
    Matrix t(m);
    t.mat[0][0]=1;
    t.mat[0][m-1]=1;
    for(int i=1;i<m;i++) t.mat[i][i-1]=1;
    
    
    Matrix res=pow(t,n-m+1);
    long long ans=0;
    for(int i=0;i<m;i++) ans=(ans+res.mat[0][i])%MOD;
    
    cout<<ans<<endl;
    
    return 0;
}