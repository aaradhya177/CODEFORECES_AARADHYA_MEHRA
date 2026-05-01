#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int &x : a)
            cin >> x;

        int total2 = 0;
        for (int x : a)
            if (x == 2)
                total2++;

        if (total2 % 2 == 1)
        {
            cout << -1 << "\n";
            continue;
        }

        int target2 = total2 / 2;
        int count2 = 0;

        int answer = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 2)
                count2++;
            if (count2 == target2)
            {
                answer = i + 1; // +1 because CF expects k as 1-based index
                break;
            }
        }

        cout << answer << "\n";
    }
}
