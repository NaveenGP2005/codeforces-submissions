// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
 
 
int main() {
   long long n,x,y;
   cin>>n;
   string s;
   cin>>s;
   cin>>x>>y;
   vector<long long>px(n+1,0),py(n+1,0);
   for(int i = 1; i <= n; i++) {
        px[i] = px[i-1];
        py[i] = py[i-1];
 
        if(s[i-1] == 'U') py[i]++;
        if(s[i-1] == 'D') py[i]--;
        if(s[i-1] == 'L') px[i]--;
        if(s[i-1] == 'R') px[i]++;
    }
 
    if(abs(x) + abs(y) > n){
        cout << -1 << "
";
        return 0;
    }
     auto check = [&](int len){
        for(int l = 1; l + len - 1 <= n; l++){
            int r = l + len - 1;
 
            long long cx = px[l-1] + (px[n] - px[r]);
            long long cy = py[l-1] + (py[n] - py[r]);
 
            long long dx = abs(x - cx);
            long long dy = abs(y - cy);
 
            long long dist = dx + dy;
 
            if(dist <= len && (len - dist) % 2 == 0)
                return true;
        }
        return false;
    };
       long long low=0,high=n,ans=-1;
       while(low<=high){
           long long mid=low+(high-low)/2;
           if(check(mid)){
               ans=mid;
               high=mid-1;
           }
           else low=mid+1;
       }
       cout<<ans<<endl;
   
   
   return 0;
}