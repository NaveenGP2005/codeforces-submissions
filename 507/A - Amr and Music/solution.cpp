#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.push_back({x,i+1});
    }
    sort(ans.begin(),ans.end());
    vector<int>res;
    int cnt=0,days=0;
    for(auto&it:ans){
        days+=it.first;
        if(days<=k){
            cnt++;
            res.push_back(it.second);
        }
        else break;
    }
    cout<<cnt<<endl;
    for(int it:res) cout<<it<<" ";
    return 0;
}