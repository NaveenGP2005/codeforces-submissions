#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    string n;
    cin>>n;
    int cnt=0;
    for(char c:n){
        if(c=='4'||c=='7') cnt++;
    }
    cout<<((cnt==4||cnt==7)?"YES":"NO")<<endl;
    
    return 0;
}