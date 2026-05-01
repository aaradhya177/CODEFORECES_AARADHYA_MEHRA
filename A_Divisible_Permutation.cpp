#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> ans(n);

        
        for (int i = n - 1, j = 1; i >= 0; i -= 2) {
            ans[i] = j++;
        }

       
        for (int i = n - 2, j = n; i >= 0; i -= 2) {
            ans[i] = j--;
        }

        for (auto &x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
