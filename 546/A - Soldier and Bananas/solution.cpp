#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n,k,w;
    cin>>n>>k>>w;
    int total=0;
    for(int i=1;i<=w;i++) total+=n*i;
    
    cout<<(k>total?0:total-k)<<endl;
    
    return 0;
}