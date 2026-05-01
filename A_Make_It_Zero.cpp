#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    if (n % 2 == 0) {
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    } else {
        cout << 4 << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << n - 1 << " " << n << "\n";
        cout << n - 1 << " " << n << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;
    while (testCases--) {
        solve();
    }
    return 0;
}