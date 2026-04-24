#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;cin>>n;
    int maxs=0;
    stack<pair<int,int>>st;
    for(int i=0;i<n;i++){
        int pyscho;
        cin>>pyscho;
        
        int maxt=0;
        while(st.size()&&st.top().first<pyscho){
            maxt=max(maxt,st.top().second);
            st.pop();
        }
        int curr;
        if(st.empty()){
            curr=0;
        }
        else{
            curr=maxt+1;
        }
        maxs=max(maxs,curr);
        st.push({pyscho,curr});
    }
    cout<<maxs<<endl;
    return 0;
}