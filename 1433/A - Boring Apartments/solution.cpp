#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
 
        int d = s[0] - '0';      
        int len = s.length();  
 
        int result = (d - 1) * 10 + (len * (len + 1)) / 2;
        cout << result << '
';
    }
 
    return 0;
}