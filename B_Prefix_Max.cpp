#include <bits/stdc++.h>
using namespace std;

long long prefMaxSum(const vector<int>& a) {
    long long sum = 0;
    int mx = INT_MIN;
    for (int x : a) {
        mx = max(mx, x);
        sum += mx;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        long long ans = prefMaxSum(a);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                vector<int> b = a;
                swap(b[i], b[j]);
                ans = max(ans, prefMaxSum(b));
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
