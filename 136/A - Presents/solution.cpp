#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int ques[n];
    int ans[n];
    for(int i=1;i<=n;i++){
    cin>>ques[i];
    ans[ques[i]]=i;
    }
    
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    
    
    return 0;
}