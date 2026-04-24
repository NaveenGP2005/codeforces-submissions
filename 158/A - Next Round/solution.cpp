#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>ques(n);
    for(int i=0;i<n;i++) cin>>ques[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(ques[i]>=ques[k-1]&&ques[i]>0) cnt++;
    }    
    cout<<cnt<<endl;
    return 0;
}