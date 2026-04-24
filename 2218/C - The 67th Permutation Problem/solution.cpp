#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        
        int sac=1,take=n+1;
        for(int i=0;i<n;i++){
            cout<<sac<<" "<<take<<" "<<take+1<<" ";
            sac++;
            take+=2;
        }
        cout<<endl;
    }
}