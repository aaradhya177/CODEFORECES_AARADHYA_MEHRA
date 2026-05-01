#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        ll minA = *min_element(a.begin(), a.end());
        ll minB = *min_element(b.begin(), b.end());

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            ans += max(a[i] - minA, b[i] - minB);
        }

        cout << ans << '\n';
    }
    return 0;
}
