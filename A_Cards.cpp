#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int,int>> a(n); // {value, index}

    for (int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1;    // 1-based index for output
    }

    sort(a.begin(), a.end());   // sort by value

    int l = 0, r = n - 1;
    while (l < r) {
        cout << a[l].second << " " << a[r].second << "\n";
        ++l;
        --r;
    }

    return 0;
}
