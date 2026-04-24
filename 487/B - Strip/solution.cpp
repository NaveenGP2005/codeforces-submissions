#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    long long n,s,l;
    cin>>n>>s>>l;
    vector<long long>a(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long f[100004];
    int g[100004];
    deque<pair<long long,int>>mindq,maxdq;
    int tail=0;
    mindq.push_back({a[0],0});
    maxdq.push_back({a[0],0});
    g[0]=0;
    for(int i=1;i<n;i++){
        while(mindq.size()&&mindq.back().first>=a[i]) mindq.pop_back();
        mindq.push_back({a[i],i});
        while(maxdq.size()&&maxdq.back().first<=a[i]) maxdq.pop_back();
        maxdq.push_back({a[i],i});
        
        while(mindq.size()&&maxdq.size()&&((long long)(maxdq.front().first-mindq.front().first)>(long long)s)){
            ++tail;
            if(maxdq.front().second<tail) maxdq.pop_front();
            if(mindq.front().second<tail) mindq.pop_front();
        }
        g[i]=tail;
    }
    
    
     mindq = deque<pair<long long,int> > ();
    for(int i=0;i<l;++i){
        f[i] = 12345678;
    }
    if(l-g[l-1] >= l) f[l-1] = 1;
    else {
        cout<<-1<<endl;
        return 0;
    }
    mindq.push_back(make_pair(0,-1));
    for(int i=l;i<n;++i){
        f[i] = 12345678;
        while(!mindq.empty() && mindq.back().first >= f[i-l]){
            mindq.pop_back();
        }
        mindq.push_back(make_pair(f[i-l],i-l));
        while(!mindq.empty() && mindq.front().second < g[i]-1){
            mindq.pop_front();
        }
        if(!mindq.empty()) f[i] = mindq.front().first + 1;
    }
    if(f[n-1] < (long long)12345678) cout << f[n-1] << endl;
    else cout<<-1<<endl;
    
    return 0;
}