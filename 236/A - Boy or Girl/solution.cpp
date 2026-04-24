#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    bool f[255]={0};
    int total=0;
    for(char c:s){
        if(f[c-'a']) continue;
        f[c-'a']=1;
        total++;
    }
    cout<<(total%2==0?"CHAT WITH HER!":"IGNORE HIM!")<<endl;
    
    return 0;
}