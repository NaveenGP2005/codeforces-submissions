#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[7];
    for(int i=0;i<7;i++) cin>>a[i];
    int total=0,i=0;
    while(1){
    total+=a[i];
    if(total>=n){
    break;   
    } 
    i++;
    if(i>6) i=0;
    }
    cout<<i+1<<endl;
    return 0;
}