#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int last=0,maxans=0;
    for(int i=0;i<n;i++){
        int in,out;
        cin>>out>>in;
        last+=(in-out);
        maxans=max(maxans,last);
    }
    cout<<maxans<<endl;
    return 0;
}