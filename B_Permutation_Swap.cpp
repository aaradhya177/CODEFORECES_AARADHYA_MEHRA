    #include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            ll k = 0;
            for (int i = 1; i <= n; i++)
            {
                int x;
                cin >> x;
                ll diff = abs(x - i);
                k = __gcd(k, diff);
            }
            cout << k << endl;
        }
    }
