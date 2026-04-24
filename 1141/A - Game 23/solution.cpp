#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    if(m%n){
        cout<<-1<<endl;
        return 0;
    }
    
    int x=m/n,mvs=0;
    while(x%2==0){
        mvs++;
        x=x/2;
    }
    while(x%3==0){
        mvs++;
        x=x/3;
    }
    if(x!=1){
        cout<<-1<<endl;
    }
    else{
        cout<<mvs<<endl;
    }
    
    return 0;
}