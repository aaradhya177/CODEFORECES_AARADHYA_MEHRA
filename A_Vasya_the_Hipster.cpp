#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    int fashion=min(a,b);
    a=a-fashion;
    b=b-fashion;
    if(a==0){
        cnt+=b/2;
    }
    else{
        cnt+=a/2;
    }
    cout<<fashion<<" "<<cnt;
 
}