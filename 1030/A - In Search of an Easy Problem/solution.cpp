#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    bool flag=0;
    vector<int>ques(n);
    for(int i=0;i<n;i++){
    cin>>ques[i];
    if(ques[i]==1) flag=1;
}
cout<<(flag?"HARD":"EASY")<<endl;
    return 0;
}