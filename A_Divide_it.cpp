#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long moves = 0;

    while (n % 5 == 0) {
        n /= 5;
        moves += 3;
    }

    while (n % 3 == 0) {
        n /= 3;
        moves += 2;
    }

    while (n % 2 == 0) {
        n /= 2;
        moves += 1;
    }

    if (n == 1) {
        cout << moves << "\n";
    } else {
        cout << "-1\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}