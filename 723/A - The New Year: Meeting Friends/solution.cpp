#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<int>ques(3);
    for(int i=0;i<3;i++)cin>>ques[i];
    sort(ques.begin(),ques.end());
    cout<<ques[2]-ques[0]<<endl;
    return 0;
}