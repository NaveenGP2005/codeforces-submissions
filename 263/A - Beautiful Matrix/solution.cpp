#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>mat(5,vector<int>(5,0));
    for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
    cin>>mat[i][j];
    if(mat[i][j]==1) cout<<max(i+1,3)-min(i+1,3)+max(j+1,3)-min(j+1,3);
    }}
    return 0;
}