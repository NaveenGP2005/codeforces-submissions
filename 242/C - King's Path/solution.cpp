#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int r0,c0,r1,c1;
    cin>>r0>>c0>>r1>>c1;
    
    int n;
    cin>>n;
    map<pair<int,int>,int>d;
    for(int i=0;i<n;i++){
        int r,a,b;
        cin>>r>>a>>b;
        for(int c=a;c<=b;c++) d[{r,c}]=-1;
    }
    
    queue<pair<int,int>>q;
    d[{r0,c0}]=0;
    q.push({r0,c0});
    int dr[]={-1,-1,-1,0,0,1,1,1};
    int dc[]={-1,0,1,-1,1,-1,0,1};
    
    while(q.size()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        if(r==r1&&c==c1) break;
        for(int i=0;i<8;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(d.count({nr,nc})&&d[{nr,nc}]==-1){
                d[{nr,nc}]=d[{r,c}]+1;
                q.push({nr,nc});
            }
        }
    }
    cout<<d[{r1,c1}]<<endl;
    return 0;
}
 
 