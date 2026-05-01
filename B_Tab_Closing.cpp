#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long a, n, b;
    cin >> a >> n >> b;
    long long moves = 0, cursor = 0;
    for (long long remaining = n; remaining > 0; --remaining) {
        long long len = min(b, a / remaining);
        cursor += len * remaining; // Go to current tab's 'x'
        moves++;
        a -= len; // Remove tab segment from line
    }
    cout << moves << endl;
    return 0;
}
