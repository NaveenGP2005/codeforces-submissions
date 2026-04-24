#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(auto &it:n){
        if(it>'4') it='9'-it+'0'; 
    }
    if(n.front()=='0')n.front()='9';
    cout<<n<<endl;
    
    return 0;
}