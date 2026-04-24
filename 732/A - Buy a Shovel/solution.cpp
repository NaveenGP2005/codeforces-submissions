#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    for(int i=1;i<=10;i++){
        int total=i*k;
        if(total%10==0||total%10==n) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}