#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<vector<int>>ques(n,vector<int>(4));
     for(int i = 0; i < n; i++){
        cin >> ques[i][0] >> ques[i][1] >> ques[i][2];
        ques[i][3] = 0; 
    }
    for(int i=0;i<n;i++){
    int mini=min(ques[i][0],ques[i][1]);
    int other=max(ques[i][1],ques[i][0]);
    while(mini<=ques[i][2]){
         mini+=other;
         ques[i][3]++;
         int temp=mini;
         mini=other;
         other=temp;
    }
    }
    for(int i=0;i<n;i++) cout<<ques[i][3]-1<<endl;
    return 0;
}