#include <bits/stdc++.h>
using namespace std;
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    stack<int>st;
    st.push(-1);
    int maxl=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(') st.push(i);
        else{
            st.pop();
            if(st.empty()) st.push(i);
            else{
                int curr=i-st.top();
                if(curr>maxl){
                    maxl=curr;
                    cnt=1;
                }
                else if(curr==maxl) cnt++;
            }
        }
    }
    if(maxl==0) {
        cout<<"0 1"<<endl;
    }else{
        cout<<maxl<<" "<<cnt<<endl;
    }
    return 0;
}