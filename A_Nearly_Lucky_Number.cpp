#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int cnt = 0;
    for (char c : n)
        if (c == '4' || c == '7')
            cnt++;

    string s = to_string(cnt);
    bool ok = true;
    for (char c : s)
        if (c != '4' && c != '7')
            ok = false;

    cout << (ok ? "YES" : "NO");
}
