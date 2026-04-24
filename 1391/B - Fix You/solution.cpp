#include <iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m,cnt=0;
    cin>>n>>m;
    vector<vector<char>>ques(n,vector<char>(m));
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    cin>>ques[i][j];
    
    for(int i=0;i<n;i++){
     if(ques[i][m-1]=='R') {
         cnt++;
         ques[i][m-1]='D';
     } 
    }
    for(int i=0;i<m;i++){
        if(ques[n-1][i]=='D'){
            cnt++;
            ques[n-1][i]='R';
        }
    }
    cout<<cnt<<endl;
    }
    return 0;
}