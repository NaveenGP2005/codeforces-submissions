#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        n = s.length();
        int zero = 0,even = 0,sum = 0;
        for(int i=0; i<n; i++){
            int temp = s[i] - '0';
            sum += temp;
            if(temp == 0){
                zero++;
            }
            if(temp % 2 == 0){
                even++;
            }
        }
        if((sum % 3 == 0 && zero > 0) && even >= 2){
            cout<<"red
";
        }
        else{
            cout<<"cyan
";
        }
    }
 
    return 0;
}