#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int ans=0,tot=0;
    for(int i=1;i<=n;i++){
        tot+=((i*(i+1))/2);
        if(tot<=n)
        ans=i;
        else break;
    }
    cout<<ans<<endl;
    return 0;
}