#include <bits/stdc++.h>
using namespace std;

long long xor_upto(long long x) {
    if (x % 4 == 0) return x;
    if (x % 4 == 1) return 1;
    if (x % 4 == 2) return x + 1;
    return 0; // x % 4 == 3
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long result = xor_upto(B) ^ xor_upto(A - 1);
    cout << result << endl;

    return 0;
}
