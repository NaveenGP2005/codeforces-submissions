#include <bits/stdc++.h>
using namespace std;
 
int MOD=676767677;
int getDivisors(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(i!=n/i) cnt++;
        }
    }
    return cnt;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;cin>>t;
    while(t--){
        int x,y;cin>>x>>y;
            if(x==y){
            cout<<1<<endl;
            for(int i=0;i<x;i++) cout<<"1 ";
            for(int i=0;i<x;i++) cout<<"-1 ";
            cout<<endl;
        }
        else{
            int d=abs(x-y);
            cout<<getDivisors(d)%MOD<<endl;
            if(x>y){
                
                
                for(int i=0;i<x;i++) cout<<"1 ";
                for(int i=0;i<y;i++) cout<<"-1 ";
            }else{
                
                for(int i=0;i<y;i++) cout<<"-1 ";
                for(int i=0;i<x;i++) cout<<"1 ";
            }
            cout<<endl;
        }
    }
}