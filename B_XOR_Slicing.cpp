#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long &x : a) cin >> x;

    unordered_map<long long, long long> freq;
    long long prefixXor = 0;
    long long answer = 1;

    for (long long x : a) {
        prefixXor ^= x;
        freq[prefixXor]++;
        answer = max(answer, freq[prefixXor]);
    }

    cout << answer << "\n";
    return 0;
}
