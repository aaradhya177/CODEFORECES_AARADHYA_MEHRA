#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int d;
    cin >> n >> d;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (abs(a[i] - a[j]) <= d)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
