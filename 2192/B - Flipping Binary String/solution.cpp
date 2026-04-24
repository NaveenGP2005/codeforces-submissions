#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ones=0,zeros=0;
        for(int i=0;i<n;i++){
        if(s[i]=='0') zeros++;
        else ones++;
        }
        if(ones%2==0){
            cout<<ones<<endl;
            for(int i=0;i<n;i++){
                if(s[i]=='1') cout<<i+1<<" ";
            }
            if(ones) cout<<endl;
        }
        else if(zeros%2==1){
            cout<<zeros<<endl;
            for(int i=0;i<n;i++){
                if(s[i]=='0') cout<<i+1<<" ";
            }
            if(zeros) cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}