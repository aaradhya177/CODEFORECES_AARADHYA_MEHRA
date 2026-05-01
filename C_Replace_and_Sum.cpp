#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
        }

        vector<long long> best(n + 1);
        int max = 0;

        for (int i = n; i >= 1; i--)
        {
            if (b[i] > max)
            {
                max = b[i];
            }
            best[i] = max;
        }

        vector<long long> pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i - 1] + best[i];
        }

        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            cout << pre[r] - pre[l - 1];
            if (i + 1 < q)
                cout << " ";
        }
        cout << "\n";
    }
    

    return 0;
}
