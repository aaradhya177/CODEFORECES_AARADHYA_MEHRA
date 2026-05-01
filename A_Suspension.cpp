#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, y, r;
        cin >> n >> y >> r;

        int ans = r + min((y/2),(n-r));  
        cout << ans << endl;
    }
}
