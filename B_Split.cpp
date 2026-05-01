#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> freq(2 * n + 1, 0);

    for (int i = 0; i < 2 * n; ++i)
    {
        int x;
        cin >> x;
        freq[x]++;
    }

    int odd_freq_count = 0;
    int even_freq_count = 0;

    for (int count : freq)
    {
        if (count == 0)
            continue;

        if (count % 2 != 0)
        {
            odd_freq_count++;
        }
        else
        {
            even_freq_count++;
        }
    }
    int ans = odd_freq_count + 2 * even_freq_count;
    if (odd_freq_count == 0)
    {
        if (even_freq_count % 2 != n % 2)
        {
            ans -= 2;
        }
    }
    cout << ans << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}