#include <iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; 
    }
    if (n == 1) {
        cout << 1 << "\n";
    } else {
        for (int i = 0; i < n; i++) {
            cout << 2 << (i == n - 1 ? "" : " ");
        }
        cout << "\n";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}