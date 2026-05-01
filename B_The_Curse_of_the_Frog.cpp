#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;

        ll ans = -1;

        for (int i = 0; i < n; i++) {
            ll a, b, c;
            cin >> a >> b >> c;

            ll first = (b - 1) * a;

            if (first >= x) {
                ans = 0;
                continue;
            }

            ll gain = b * a - c;
            if (gain <= 0) continue;

            ll need = x - first;
            ll cnt = (need + gain - 1) / gain;

            if (ans == -1 || cnt < ans)
                ans = cnt;
        }

        cout << ans << "\n";
    }

    return 0;
}
