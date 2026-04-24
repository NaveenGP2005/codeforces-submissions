#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    
    vector<long long>l(n),r(n);
    for(int i=0;i<n;i++){
        l[i]=i;
        while(l[i]>0&&a[l[i]-1]%a[i]==0) l[i]=l[l[i]-1];
    }
    for(int i=n-1;i>=0;i--){
        r[i]=i;
        while(r[i]<n-1&&a[r[i]+1]%a[i]==0) r[i]=r[r[i]+1];
    }
    
    long long maxl=-1;
    vector<long long>best;
    for(int i=0;i<n;i++){
        long long curr=r[i]-l[i];
        if(curr>maxl){
            maxl=curr;
            best.clear();
            best.push_back(l[i]);
        }
        else if(curr==maxl){
            best.push_back(l[i]);
        }
    }
    sort(best.begin(), best.end());
    best.erase(unique(best.begin(), best.end()), best.end());
    cout<<best.size()<<" "<<maxl<<endl;
    for(int i=0;i<best.size();i++) cout<<best[i]+1<<" ";
    cout<<endl;
    return 0;
}