#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int n,k;
    cin>>n>>k;
    vector<int>cnt(k+1,0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt[x]++;
    }
    
    int sets=(n+1)/2;
    int singles=0,pairs=0;
    for(int i=1;i<=k;i++){
        pairs+=cnt[i]/2;
       if(cnt[i]%2==1)
        singles++;
    }
    int used=min(pairs,sets);
    int rem=sets-used;
    int happy=2*used;
    happy+=min(singles,rem);
    cout<<happy<<endl;
    return 0; 
    
}