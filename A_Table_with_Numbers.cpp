#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, h, w;
        cin >> n >> h >> w;

        int r = 0, c = 0, both = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x <= h) r++;
            if (x <= w) c++;
            if (x <= min(h, w)) both++;
        }

        int usable = r + c - both;
        int ans = min({r, c, usable / 2});

        cout << ans << "\n";
    }
    return 0;
}
