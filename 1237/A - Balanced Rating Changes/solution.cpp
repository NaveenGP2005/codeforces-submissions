#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    bool flag=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) a[i]=a[i]/2;
        else{
            if(flag){
                if(a[i]>0)
                a[i]=(a[i]/2)+1;
                else
                a[i]=a[i]/2;
                flag=0;
            }
            else{
                if(a[i]>0)
            a[i]=(a[i]/2);
            else
            a[i]=a[i]/2-1;
            flag=1;
        }
        }
    }
    
    for(int i=0;i<n;i++) cout<<a[i]<<endl;
    
    return 0;
}