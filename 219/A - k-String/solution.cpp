#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,ans="";
    cin>>s;
    int f[26]={0};
    for(char c:s) f[c-'a']++;
    
    int i=0;
    for(;i<26;i++){
        if(f[i]%n!=0) break;
        else{
            ans.append(f[i]/n,char('a'+i));
        }
    }
    if(i==26){
        while(n--) cout<<ans;
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
    return 0;
}