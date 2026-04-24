#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    while(n--){
        string num;
        cin >> num;
 
        int cnt = 0;
        for(int i = 0; i < num.size(); i++){
            if(num[i] != '0') cnt++;
        }
 
        cout << cnt << '
';
 
        for(int i = 0; i < num.size(); i++){
            if(num[i] != '0'){
                cout << num[i];
                for(int j = 0; j < num.size() - 1 - i; j++)
                    cout << '0';
                cout << ' ';
            }
        }
        cout << '
';
    }
 
    return 0;
}