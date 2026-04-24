#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int res=0;
    if(m>n){
        cout<<-1<<endl;
        return 0;
    }
    else{
        if(n%m) res=n/2+1;
        else res=n/2;
        while(res%m!=0) res++;
    }
    cout<<res<<endl;
    
    
 
    return 0;
}