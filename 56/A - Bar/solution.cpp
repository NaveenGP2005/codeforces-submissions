#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<string> alcohol = {
        "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", 
        "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"
    };
    int t;
    cin>>t;
    int cnt=0;
    while(t--){
         string s;
         cin>>s;
         if(isdigit(s[0])){
             int age=stoi(s);
             if(age<18) cnt++;
         }
         else{
             if(alcohol.count(s)) cnt++;
         }
    }
    
    cout<<cnt<<endl;
    return 0;
}