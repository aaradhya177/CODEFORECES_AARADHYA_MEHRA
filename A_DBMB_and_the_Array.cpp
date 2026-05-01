#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            sum += a;
        }

        if (sum <= s && (s - sum) % x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
