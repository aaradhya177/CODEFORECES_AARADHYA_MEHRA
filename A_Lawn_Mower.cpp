#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, w;
        cin >> n >> w;
        ll blocks = n / w;
        ll rem = n % w;
        ll ans = blocks * (w - 1) + rem;
        cout << ans << "\n";
    }
}
