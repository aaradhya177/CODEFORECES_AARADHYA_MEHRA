#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll k,n,w;
    cin>>k>>n>>w;
    ll cost=0;
    for(ll i=1;i<=w;i++){
        cost+=i*k;
    }
    if(cost>n){
    cout<<cost-n; 
    }
    else cout<<0;
}