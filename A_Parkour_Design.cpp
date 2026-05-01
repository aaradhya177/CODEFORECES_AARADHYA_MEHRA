#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int d1=x-2*y;
        int d2=x+4*y;
        if(d1 % 3 == 0 && x>=2*y && x>=-4*y)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}// x >= 2 * y && x >= -4 * y