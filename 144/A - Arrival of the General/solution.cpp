#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>ques(n);
    for(int i=0;i<n;i++) cin>>ques[i];
    
    int mini=0,maxi=0;
    for(int i=0;i<n;i++){
        if(ques[i]>ques[maxi]) maxi=i;
        if(ques[i]<=ques[mini]) mini=i;
    }
    int moves = maxi + (n - 1 - mini);
    if(maxi > mini) moves--;
 
    cout << moves << '
';
    return 0;
}