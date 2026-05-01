#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    long long ice = x;
    int sad = 0;

    for (int i = 0; i < n; i++) {
        char op;
        long long d;
        cin >> op >> d;

        if (op == '+') {
            ice += d;
        } else {
            if (ice >= d) {
                ice -= d;
            } else {
                sad++;
            }
        }
    }

    cout << ice << " " << sad;
    return 0;
}
