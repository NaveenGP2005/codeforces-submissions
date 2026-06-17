#include <bits/stdc++.h>
using namespace std;
const long long MOD=1000000007;
struct Matrix{
    long long mat[2][2];
    Matrix(){
        mat[0][0]=mat[0][1]=mat[1][0]=mat[1][1]=0;
    }
};
 
Matrix mul(Matrix a,Matrix b){
    Matrix res;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                res.mat[i][j]=(res.mat[i][j]+a.mat[i][k]*b.mat[k][j])%MOD;
            }
        }
    }
    return res;
}
 
Matrix pow(Matrix a,long long p){
    Matrix res;
    res.mat[0][0]=res.mat[1][1]=1;
    res.mat[0][1]=res.mat[1][0]=0;
    
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
    cin>>n;
    
    Matrix m;
    m.mat[0][0]=m.mat[1][1]=3;
    m.mat[0][1]=m.mat[1][0]=1;
    
    Matrix res=pow(m,n);
    cout<<res.mat[0][0]<<endl;
    
    return 0;
}