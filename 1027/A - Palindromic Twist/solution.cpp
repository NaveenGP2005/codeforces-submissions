#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=0;
        for(int i=0;i<n;i++){
            int diff=abs(s[i]-s[n-i-1]);
            if(diff!=0&&diff!=2){
                flag=1;
                break;
            }
        }
        cout<<(flag?"NO":"YES")<<endl;
    }
    return 0;
}