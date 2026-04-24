#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        long long p,q;
        cin>>p>>q;
        
        
        long long unit=p+2*q;
        for(long long i=1;;i++){
            long long num=unit-i;
            long long den=2*i+1;
            
            long long m=num/den;
            if(i>m) {
                cout<<"-1"<<endl;
                break;
            }
            else{
                if(num%den==0){
                    long long hor=m*(i+1);
                    long long vert=i*(m+1);
                    
                    if(q<=hor&&q<=vert){
                        cout<<i<<" "<<m<<endl;
                        break;
                    }
                }
            }
        }
        
    }
}