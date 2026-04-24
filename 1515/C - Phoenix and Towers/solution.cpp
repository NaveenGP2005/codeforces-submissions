#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    long long n,m,x;
    cin>>n>>m>>x;
    vector<long long>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"YES"<<endl;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(int i=1;i<=m;i++) pq.push({0,i});
    
    for(int i=0;i<n;i++){
        pair<int,int>q=pq.top();pq.pop();
        int f=q.first,s=q.second;
        cout<<s<<" ";
        pq.push({f+a[i],s});
    }
    cout<<endl;
    }
    return 0;
}