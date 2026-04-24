// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main() {
    long long n,k;
    cin>>n>>k;
    int min_pieces = __builtin_popcount(n);
    if (k < min_pieces || k > n) {
        cout << "NO
";
        return 0;
    }
    priority_queue<long long> pq;
    for (int i = 0; i < 30; i++) {
        if ((n >> i) & 1) {
            pq.push(1 << i); 
        }
    }
    while(pq.size()<k){
        long long f=pq.top();pq.pop();
        pq.push(f/2);
        pq.push(f/2);
    }
    cout<<"YES"<<endl;
    vector<long long>a;
    while(pq.size()){
        a.push_back(pq.top());
        pq.pop();
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
   return 0;
}