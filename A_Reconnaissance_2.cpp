#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int minDiff = INT_MAX;
    int x = 1, y = 2;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = abs(a[i] - a[i + 1]);
        if (diff < minDiff)
        {
            minDiff = diff;
            x = i + 1;
            y = i + 2;
        }
    }

    int diff = abs(a[n - 1] - a[0]);
    if (diff < minDiff)
    {
        x = n;
        y = 1;
    }

    cout << x << " " << y;
    return 0;
}
