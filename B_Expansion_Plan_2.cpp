#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        long long x, y;
        cin >> x >> y;

        int n = s.length();

        // Step 1: Check if the string contains any '8'
        bool containsEight = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '8') {
                containsEight = true;
            }
        }

        bool isBlack = false;

        // Step 2: Decide the shape and check if (x,y) is inside
        if (containsEight == true) {
            // Square shape (Chebyshev distance)
            long long dx = llabs(x);
            long long dy = llabs(y);

            if (max(dx, dy) <= n) {
                isBlack = true;
            }

        } else {
            // Diamond shape (Manhattan distance)
            long long dx = llabs(x);
            long long dy = llabs(y);

            if (dx + dy <= n) {
                isBlack = true;
            }
        }

        // Step 3: Output result
        if (isBlack) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
