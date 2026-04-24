#include<bits/stdc++.h>
using namespace std;
 
vector<long long>prime;
 
void computep(){
    int l=150000;
    vector<bool>isp(l+1,1);
    isp[0]=0;
    isp[1]=0;
    
    for(int i=2;i*i<=l;i++){
        if(isp[i]){
            for(int p=i*i;p<=l;p+=i){
                isp[p]=0;
            }
        }
    }
    
    
    for(int i=2;i<=l;i++){
        if(isp[i]) prime.push_back(i);
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin>>t;
    
    computep();
    while(t--){
        int n;
        cin>>n;
        
        
        for(int i=0;i<n;i++)
        cout<<prime[i]*prime[i+1]<<" ";
        
        cout<<endl;
        
    }
}