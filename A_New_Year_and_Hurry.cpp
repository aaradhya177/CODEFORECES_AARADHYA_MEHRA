#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int remainingTime = 240 - k;
    int timeUsed = 0;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        timeUsed += 5 * i;
        if (timeUsed > remainingTime)
            break;
        solved++;
    }

    cout << solved;
    return 0;
}
