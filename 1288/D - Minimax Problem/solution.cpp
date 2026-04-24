// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>>a(n,vector<long long>(m,0));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>a[i][j];
    
    long long full=(1<<m)-1,finali=0,finalj=0;
    long long l=0,r=1e9;
    while(l<=r){
        long long mid=(l+r)/2;
        vector<long long>pos(1<<m,-1);
        for(int i=0;i<n;i++){
        int mask=0;
        for(int j=0;j<m;j++)
        if(a[i][j]>=mid)
        mask|=(1<<j);
        
        pos[mask]=i;
        }
        
        bool ok=0;
        for(int i=0;i<(1<<m);i++){
            if(pos[i]==-1) continue;
            for(int j=0;j<(1<<m);j++){
                if(pos[j]==-1)continue;
                if((i|j)==full){
                    finali=pos[i];
                    finalj=pos[j];
                    ok=1;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok) l=mid+1;
        else r=mid-1;
        
    }
    cout<<finali+1<<" "<<finalj+1<<endl;
   return 0;
}