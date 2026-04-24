#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    long long blocks,rem;
    blocks=m/(k+1),rem=m%(k+1);
    cout<<blocks*(k*a[n-1]+a[n-2])+rem*a[n-1]<<endl;
    return 0; 
    
}