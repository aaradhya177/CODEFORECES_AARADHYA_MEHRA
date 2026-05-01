#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int odd_cnt = 0, even_cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even_cnt++;
        else
            odd_cnt++;
    }

    if (a.size() == 2) {
        if ((a[0] % 2 == 0 && a[1] % 2 == 0) || (a[0] % 2 != 0 && a[1] % 2 != 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    } 
    else {
        if (odd_cnt % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
