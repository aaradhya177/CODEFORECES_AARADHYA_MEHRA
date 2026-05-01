#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n,k,x;
        cin >> n >> k >> x;

        ll min = k*(k+1)/2;
        ll max = n*(n+1)/2 - (n-k)*(n-k+1)/2;

        if(x >= min && x <= max) cout << "YES\n";
        else cout << "NO\n";
    }
}
