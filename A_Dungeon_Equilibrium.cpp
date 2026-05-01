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

        unordered_map<int, int> freq;
        for (int x : a)
            freq[x]++;

        int deletions = 0;

        for (auto &p : freq)
        {
            int x = p.first;
            int f = p.second;

            if (x == 0)
            {

                deletions += f;
            }
            else if (f == x)
            {

                continue;
            }
            else if (f > x)
            {

                deletions += (f - x);
            }
            else
            {

                deletions += f;
            }
        }

        cout << deletions << "\n";
    }
    return 0;
}
