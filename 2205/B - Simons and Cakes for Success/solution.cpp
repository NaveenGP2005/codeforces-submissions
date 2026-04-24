#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=1,temp=n;
        
        for(long long i=2;i*i<=temp;i++){
            if(temp%i==0){
                ans*=i;
                while(temp%i==0) temp/=i;
            }
        }
        if(temp>1) ans*=temp;
        cout<<ans<<endl;
    }
    return 0; 
    
}