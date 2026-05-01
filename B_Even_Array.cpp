#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int even = 0;
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && a[i] % 2 != 0)
                even++;
            else if (i % 2 != 0 && a[i] % 2 == 0)
                odd++;
        }

        if (even != odd)
            cout << -1 << endl;
        else
            cout << even << endl;
    }
}
