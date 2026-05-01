#include <bits/stdc++.h>
using ll=long long;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll cnt=0;
    for(ll i=0;i<n-1;i++)if(v[i]%2==v[i+1]%2)cnt++;
    cout<<cnt<<endl;
}
int main(){int t;
cin>>t;
while(t--){
    solve();
}}
