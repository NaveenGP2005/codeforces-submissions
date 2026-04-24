#include<iostream>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int t;
cin>>t;
while(t--){
int n,x;
cin>>n;
for(int i=0;i<n;i++)cin>>x;
if(n==1)cout<<1<<"
";
else{
for(int i=0;i<n;i++)cout<<2<<" ";
cout<<"
";
}
}
return 0;
}