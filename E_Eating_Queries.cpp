#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        
        sort(a.rbegin(), a.rend());

        
        vector<long long> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
            pref[i] = pref[i - 1] + a[i];

        
        while (q--) {
            long long x;
            cin >> x;

            auto it = lower_bound(pref.begin(), pref.end(), x);

            if (it == pref.end()) {
                cout << -1 << "\n";
            } else {
                int index = it - pref.begin();
                cout << index + 1 << "\n";  
            }
        }
    }
}
