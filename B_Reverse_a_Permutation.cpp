#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int l = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != n - i) {
                l = i;
                break;
            }
        }

        if (l != -1) {
            int r;
            for (int i = l; i < n; i++) {
                if (a[i] == n - l) {
                    r = i;
                    break;
                }
            }
            reverse(a.begin() + l, a.begin() + r + 1);
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << (i + 1 < n ? ' ' : '\n');
    }

    return 0;
}
