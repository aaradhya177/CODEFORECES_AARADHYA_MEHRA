#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    int m;
    cin >> n >> m;

    vector<long long> a(m);
    for (int i = 0; i < m; i++) cin >> a[i];

    sort(a.begin(), a.end());

    if (m > 0 && (a[0] == 1 || a.back() == n)) {
        cout << "NO\n";
        return 0;
    }

    for (int i = 0; i + 2 < m; i++) {
        if (a[i] + 1 == a[i+1] && a[i] + 2 == a[i+2]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
