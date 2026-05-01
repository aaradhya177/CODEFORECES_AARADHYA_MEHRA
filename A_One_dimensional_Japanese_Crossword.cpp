#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> groups;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            cnt++; 
        }
        else
        {
            if (cnt > 0)
            {
                groups.push_back(cnt);
                cnt = 0;
            }
        }
    }
    if (cnt > 0)
        groups.push_back(cnt);

    cout << groups.size() << "\n";
    for (int x : groups)
        cout << x << " ";
}
