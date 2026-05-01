#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool f[26];
    for (int i = 0; i < 26; i++)
        f[i] = false;
    for (int i = 0; i < n; i++)
    {
        char c = s[i];
        if (c >= 'A' && c <= 'Z')
            c = c + 32;
        int idx = c - 'a';
        f[idx] = true;
    }
    bool o = true;
    for (int i = 0; i < 26; i++)
        if (!f[i])
            o = false;
    if (o)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
