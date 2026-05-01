#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    if (cin >> n >> m) {
        int flats = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int w1, w2;
                cin >> w1 >> w2;
                if (w1 == 1 || w2 == 1) {
                    flats++;
                }
            }
        }
        cout << flats << endl;
    }
    return 0;
}