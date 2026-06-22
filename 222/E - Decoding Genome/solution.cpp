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
 
    long long n;
    int m ,k;
    cin>>n>>m>>k;
    Matrix T(m);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++) T.mat[i][j]=1;
    }
    
    for(int i=0;i<k;i++){
        string s;
        cin>>s;
        T.mat[get(s[0])][get(s[1])]=0;
    }
    
    Matrix res=pow(T,n-1);
    long long ans=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++) ans=(ans+res.mat[i][j])%MOD;
    }
    
    cout<<ans<<endl;
    
    return 0;
}