#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,w;
    cin>>n>>w;
    vector<int>b(n),e(w);
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<w;i++) cin>>e[i];
    
    
    if(w==1){
        cout<<n<<endl;
        return 0;
    }
    
    vector<int>diffb(n-1,0),diffe(w-1,0);
    for(int i=1;i<n;i++) diffb[i-1]=b[i]-b[i-1];
    for(int i=1;i<w;i++) diffe[i-1]=e[i]-e[i-1];
    
    
    
    vector<int>lps(w-1,0);
    int pre=0,suf=1;
    int len=w-1;
    while(suf<len){
        if(diffe[pre]==diffe[suf]){
            lps[suf]=pre+1;
            pre++,suf++;
        }else{
            if(pre==0){
                lps[suf++]=0;
            }else{
                pre=lps[pre-1];
            }
        }
    }
    
    int textlen=n-1,cnt=0;
    int i=0,j=0;
    while(i<textlen){
        if(diffb[i]==diffe[j]){
            i++,j++;
            if(j==len){
                cnt++;
                j=lps[j-1];
            }
        }else{
            if(j==0) i++;
            else j=lps[j-1];
        }
    }
    
    cout<<cnt<<endl;
    return 0;
}