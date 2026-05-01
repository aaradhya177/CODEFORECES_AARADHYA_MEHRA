#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d(n);
 
    for (int i = 1; i < n; i++) {
        cin >> d[i];
    }

    int a, b;
    cin >> a >> b;

    int total = 0;
   
    for (int i = a; i < b; i++) {
        total += d[i];
    }

    cout << total;
    return 0;
}
