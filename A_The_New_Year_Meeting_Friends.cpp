#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(3);
    for (int &x : v) cin >> x;

    sort(v.begin(), v.end());

    int ans = abs(v[0] - v[1]) + abs(v[2] - v[1]);
    cout << ans;
}
