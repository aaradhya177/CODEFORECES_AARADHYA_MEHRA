#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int a = 2 * (d1 + d2);
    int b = (d1 + d2 + d3);
    int c = 2 * (d1 + d3);
    int d = 2 * (d2 + d3);
    int ans = min({a, b, c, d});
    cout << ans;
}