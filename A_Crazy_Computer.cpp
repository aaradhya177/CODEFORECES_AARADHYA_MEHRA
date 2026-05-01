#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n >> c;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int cnt = 1, ans = 1;

    for (int i = 0; i < n - 1; i++) {
        if (v[i + 1] - v[i] <= c) {
            cnt++;
        } else {
            cnt = 1;
        }
        ans = max(ans, cnt);
    }

    cout << ans;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long c;
    cin >> n >> c;

    vector<long long> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    int ans = 1; // at least the last word stays when it is typed
    for (int i = 1; i < n; ++i) {
        if (t[i] - t[i - 1] <= c) {
            ans++;
        } else {
            ans = 1;
        }
    }

    cout << ans << '\n';
    return 0;
}
