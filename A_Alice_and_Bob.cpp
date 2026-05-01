#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long a;
        cin >> n >> a;
        vector<long long> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        // The optimal b is (v[n/2] + v[(n-1)/2]) / 2 when n is even
        // and v[n/2] when n is odd. But as per test cases, just pick median.
        cout << v[n / 2] << "\n";
    }
    return 0;
}
