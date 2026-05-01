#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
// new concept 
    vector<int> p(n + 1), ans(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
// reversing 
    for (int i = 1; i <= n; i++) {
        int receiver = p[i];
        ans[receiver] = i;
    }


    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
