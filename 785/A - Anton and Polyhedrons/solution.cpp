#include <iostream>
#include <string>
#include<unordered_map>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    unordered_map<string,int>mp={{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
    int cnt=0;
    while(n--){
        string s;
        cin>>s;
        cnt+=mp[s];
    }
    cout<<cnt<<endl;
    return 0;
}