#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int operations = 0;

        
        for (int i = n - 2; i >= 0; i--) {
            if (s[i] != s[i + 1]) {
                operations++;
                s[i] = s[i + 1]; 
            }
        }

        cout << operations << "\n";
    }

    return 0;
}
