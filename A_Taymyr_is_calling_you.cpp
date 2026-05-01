#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, z;
    cin >> n >> m >> z;

    vector<int> a;
    vector<int> b;

    for (int i = 1; n*i <= z; i++) {
        a.push_back(n * i);
    }

    for (int i = 1; m*i <= z; i++) {
        b.push_back(m * i);
    }

    int cnt = 0;

    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
