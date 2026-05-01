#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        int ans = 0;
        for (ll i = x + 1; i <= x + 1000; i++)
        {
            ll temp = i, s = 0;
            while (temp > 0)
            {
                s += temp % 10;
                temp /= 10;
            }
            if (i - s == x)
                ans++;
        }
        cout << ans << "\n";
    }
}
