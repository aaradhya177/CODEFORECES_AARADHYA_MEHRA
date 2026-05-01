#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool ok = true;

        for (int i = 0; i < n / 2; i++) {
            int diff = abs(s[i] - s[n - 1 - i]);
            if (diff != 0 && diff != 2) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
