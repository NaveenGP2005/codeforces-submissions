#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    stack<int>ls,rs;
    vector<long long>pos(n+1),l(n,-1),r(n,n);
    for(int i=0;i<n;i++) pos[a[i]]=i;
    
    for(int i=0;i<n;i++){
        while(!ls.empty()&&a[ls.top()]<a[i]) ls.pop();
        
        if(!ls.empty()) l[i]=ls.top();
        ls.push(i);
    }
    for(int i=n-1;i>=0;i--){
        while(!rs.empty()&&a[rs.top()]<a[i]) rs.pop();
        
        if(!rs.empty()) r[i]=rs.top();
        rs.push(i);
    }
    
    long long ans=0;
    for(int i=0;i<n;i++){
        long long llen=i-l[i]-1,rlen=r[i]-i-1;
       if(llen<rlen){
           for(int j=l[i]+1;j<i;j++){
               long long x=a[i]-a[j];
               if(x>0&&pos[x]<r[i]&&pos[x]>i&&x<=n) ans++;
           }
       }
       else{
           for(int j=i+1;j<r[i];j++){
               long long x=a[i]-a[j];
               if(x>0&&x<=n&&pos[x]>l[i]&&pos[x]<i) ans++;
           }
       }
    }
    cout<<ans<<endl;
    return 0;
}