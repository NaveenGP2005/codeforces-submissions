#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int>>b(m,vector<int>(n,0));
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++) cin>>b[i][j];
    
    vector<vector<int>>a(m,vector<int>(n,1));
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(b[i][j]==0){
            for(int k=0;k<n;k++) a[i][k]=0;
            for(int k=0;k<m;k++) a[k][j]=0;
        }
    }}
    
    vector<vector<int>>b1(m,vector<int>(n,1));
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        int val=0;
            for(int k=0;k<n;k++) val=val| a[i][k];
            for(int k=0;k<m;k++) val=val| a[k][j];
        b1[i][j]=val;
    }}
    
    if(b1!=b) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
        cout<<endl;
    }
    }
    return 0;
}