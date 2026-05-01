#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    unordered_set<long long> s;  // to count distinct colors
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        s.insert(x);
    }

    // The 10^18-th cell will have color equal to number of distinct colors
    cout << s.size() << "\n";

    return 0;
}
