#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> ones;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                ones.push_back(i);
        }

        if ((int)ones.size() == n) {
            cout << 0 << "\n";
            continue;
        }

        int maxGap = 0;
        int k = ones.size();

        for (int i = 0; i < k; i++) {
            int p1 = ones[i];
            int p2 = ones[(i + 1) % k];

            int gap;
            if (p2 > p1)
                gap = p2 - p1 - 1;
            else
                gap = (n - p1 - 1) + p2;

            maxGap = max(maxGap, gap);
        }

        cout << maxGap << "\n";
    }

    return 0;
}
