#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int k = 0;
    for(char c : s) {
        if(c == 'a') k++;
    }

    int n = s.size();
    cout << min(n, 2 * k - 1) << "\n";

    return 0;
}
