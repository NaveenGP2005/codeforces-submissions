#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n--){
     string s;
     cin>>s;
     if(s[1]=='+') cnt++;
     else cnt--;
    }
    cout<<cnt<<endl;
    return 0;
}