#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin>>n;
    vector<vector<long long>>d(n+1,vector<long long>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>d[i][j];
    }
    vector<int>x(n+1);
    for(int i=1;i<=n;i++)
    cin>>x[i];
    
    vector<long long>ans(n+1);
    vector<bool>active(n+1,0);
    for(int s=n;s>=1;s--){
        int k=x[s];
        active[k]=1;
        
        long long sum=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][k]+d[k][j]<d[i][j])
                d[i][j]=d[i][k]+d[k][j];
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(active[i]&&active[j])
                sum+=d[i][j];
            }
        }
        ans[s]=sum;
    }
    
    
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    
 
    return 0;
}