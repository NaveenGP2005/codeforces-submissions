#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x,y;
    cin >> n>>x>>y;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for(int i=0;i<n;i++){
        bool flag=0;
        int cnt=0,idx=i-1;
        while(idx>=0&&cnt<x){
            if(a[idx]<a[i]){
                flag=1;
                break;
            }
            idx--;
            cnt++;
        }
        if(flag) continue;
        
        idx=i+1,cnt=0;
        
        while(idx<n&&cnt<y){
            if(a[idx]<a[i]){
                flag=1;
                break;
            }
            idx++,cnt++;
        }
        
        if(!flag){
            cout<<i+1<<endl;
            return 0;
        }
        
    }
    return 0;
}