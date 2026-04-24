#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    int cnt=0;
    cin>>n;
    while(n--){
        vector<int>ques(3);
        int cnt1=0;
        for(int i=0;i<3;i++){
        cin>>ques[i];
        if(ques[i]==1) cnt1++;
        }
        if(cnt1++>1) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}