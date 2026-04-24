// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    int last[100005]={0};
    for(int i=1;i<=t;i++){
        int x,y,valid=0;
        cin>>x>>y;
        for(int d=1;d*d<=x;d++){
            if(x%d==0){
            if(last[d]<(i-y)) valid++;
            last[d]=i;
            int pair=x/d;
            if(d!=pair){
                if(last[pair]<(i-y)){
                    valid++;
                }
                last[pair]=i;
            }
        }
        }
    cout<<valid<<endl;
    }
    
   return 0;
}