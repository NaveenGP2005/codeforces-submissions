#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++) cin>>ans[i];
    int cnt=1,lg=0;
    for(int i=0;i<n-1;i++){
        if(ans[i+1]>ans[i]) cnt++;
        else{
            lg=max(lg,cnt);
            cnt=1;
        }
    }
    cout<<max(lg,cnt)<<endl;
    return 0;
}