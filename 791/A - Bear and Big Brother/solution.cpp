#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    int total=0;
    while(n<=k){
        n=n*3,k=k*2;
        total++;
    }
    
    cout<<total<<endl;
    
    return 0;
}