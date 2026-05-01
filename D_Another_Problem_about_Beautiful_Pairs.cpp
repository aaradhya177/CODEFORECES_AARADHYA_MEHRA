#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n+1);
        for(ll i=1;i<=n;i++) cin >> a[i];
        ll ans = 0;
        for(ll i=1;i<=n;i++){
            for(ll j=i+1;j<=n;j++){
                if(a[i] * a[j] == j - i) ans++;
            }
        }
        cout << ans << "\n";
    }
}
