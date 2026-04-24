#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    long long n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    long long maxh=*max_element(a.begin(),a.end());
    
    stack<int>s;
    for(int i=0;i<n;i++){
        if(!s.empty()&&a[i]==s.top()) s.pop();
        else if(!s.empty()&&a[i]>s.top()){
            cout<<"NO"<<endl;
            return 0;
            
        } 
        else{
        s.push(a[i]);
        }
    }
    
    if(s.size()==1&&s.top()==maxh) cout<<"YES"<<endl;
    else if(!s.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}