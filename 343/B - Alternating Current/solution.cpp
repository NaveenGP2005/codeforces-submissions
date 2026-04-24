#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     string s;
     cin>>s;
     stack<char>st;
     long long i=0,mid=(s.size()+1)/2;
     while(i<s.size()){
         if(!st.empty()&&st.top()==s[i]) i++,st.pop();
         else st.push(s[i++]);
     }
     cout<<(st.empty()?"YES":"NO")<<endl;
    return 0;
}