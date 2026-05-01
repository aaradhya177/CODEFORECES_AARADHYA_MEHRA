#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int maxH = -1, minH = 101;
    int maxIdx = 0, minIdx = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > maxH) {
            maxH = a[i];
            maxIdx = i; 
        }
        if (a[i] <= minH) {
            minH = a[i];
            minIdx = i; 
        }
    }

    int moves = maxIdx + (n - 1 - minIdx);
    if (maxIdx > minIdx) moves--;

    cout << moves;
}
