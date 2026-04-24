#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>pre(k)
    ;vector<bool>used(n+1,0);
    for(int i=0;i<k;i++){
    cin>>pre[i];
        used[pre[i]]=1;
    } 
    
    stack<int>s;
    int expected=1;
    vector<int>ans;
    
    for(int i=0;i<k;i++){
        int x=pre[i];
        while(!s.empty()&&s.top()<x) {
            if(s.top()==expected){
                s.pop();
                expected++;
            }
            else{
                cout<<"-1"<<endl;
                return 0;
            }
        }
        
        s.push(x);
        ans.push_back(x);
        
        while(!s.empty()&&s.top()==expected){
            s.pop();
            expected++;
        }
    }
    
    
    int curmax=n;
    for(int i=k;i<n;i++){
        int x;
        if(!s.empty()) x=s.top()-1;
        else {
            while(used[curmax]) curmax--;
            x=curmax;
        }
        
        s.push(x);
        ans.push_back(x);
        used[x]=1;
        
        while(!s.empty()&&s.top()==expected){
            s.pop();
            expected++;
        }
    }
    
    
    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}