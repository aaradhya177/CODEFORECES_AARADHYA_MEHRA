#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        if(v[i]=="Tetrahedron") total+=4;
        else if(v[i]=="Cube")total+=6;
        else if(v[i]=="Octahedron" )total+=8;
        else if(v[i]=="Dodecahedron")total+=12;
        else  total+=20;
    }
    cout<<total;
}