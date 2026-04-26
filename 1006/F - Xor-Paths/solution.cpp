#include <bits/stdc++.h>
using namespace std;
    int n,m;
    long long k;
    
    long long g[25][25];
    long long half=0;
    
    map<long long,long long>f[25][25];
    long long totalp=0;
    
    void dfsf(int r,int c,int step,long long cxor){
        cxor^=g[r][c];
        if(step==half){
            f[r][c][cxor]=f[r][c][cxor]+1;
            return;
        }
        
        if(c+1<=m){
            dfsf(r,c+1,step+1,cxor);
        }
        if(r+1<=n) dfsf(r+1,c,step+1,cxor);
    }
    
    void dfsb(int r,int c,int step,long long cxor){
        cxor^=g[r][c];
        if(step==(n+m-2)-half){
            long long target=k^cxor^g[r][c];
            
            if(f[r][c].count(target)){
                totalp+=f[r][c][target];
            }
            return;
        }
        
        if(c-1>=1){
            dfsb(r,c-1,step+1,cxor);
        }
        if(r-1>=1) dfsb(r-1,c,step+1,cxor);
    }
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin>>g[i][j];
    
    half=(n+m-2)/2;
    
    
    dfsf(1,1,0,0);
    dfsb(n,m,0,0);
    
    
    cout<<totalp<<endl;
}