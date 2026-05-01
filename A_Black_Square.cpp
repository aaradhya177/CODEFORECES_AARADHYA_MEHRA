#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    for (int i = 1; i <= 4; i++)
        cin >> v[i];

    string s;
    cin >> s;

    int cnt = 0;

    for (char c : s)
        cnt += v[c - '0'];

    cout << cnt << endl;
}
