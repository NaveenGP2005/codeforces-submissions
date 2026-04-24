#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        vector<int>a(7);
        for(int i=0;i<7;i++) cin>>a[i];
        
        sort(a.begin(),a.end());
        
        int ts=0;
        for(int i=0;i<6;i++) ts-=a[i];
        
        ts+=a[6];
        cout<<ts<<endl;
    }
}