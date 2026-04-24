// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>a(n,vector<int>(m,0));
    int ixor=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>a[i][j];
        ixor^=a[i][0];
    }
    if(ixor>0){
        cout<<"TAK"<<endl;
        for(int i=0;i<n;i++) cout<<"1"<<" ";
        cout<<endl;
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][j]!=a[i][0]){
                    cout<<"TAK"<<endl;
                    for(int k=0;k<n;k++){
                        if(k==i) cout<<j+1<<" ";
                        else cout<<1<<" ";
                    }
                cout<<endl;
                return 0;
                }
            }
        }
    cout<<"NIE"<<endl;
    }
   return 0;
}