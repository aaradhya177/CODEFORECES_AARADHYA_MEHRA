#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        int total_dist = n + m - 2;
        vector<vector<int>> cnt(total_dist + 1, vector<int>(2, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                cnt[i + j][a[i][j]]++;
            }
        }
        int ans = 0;
        for (int i = 0; i < (total_dist + 1) / 2; i++) {
            int j = total_dist - i;
            int zeros = cnt[i][0] + cnt[j][0];
            int ones = cnt[i][1] + cnt[j][1];
            ans += min(zeros, ones);
        }
        cout << ans << endl;
    }
    return 0;
}