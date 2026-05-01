#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int L = 1;
    int L1 = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) {

            L1++;
        } else {
            L = max(L, L1);
            L1 = 1;
        }
    }
    L = max(L, L1);
    cout << L + 1 << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}