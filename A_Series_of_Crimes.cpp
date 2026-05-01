#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> stars;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= m; j++) {
            if (s[j-1] == '*') {
                stars.push_back({i, j});
            }
        }
    }

    int x1 = stars[0].first, y1 = stars[0].second;
    int x2 = stars[1].first, y2 = stars[1].second;
    int x3 = stars[2].first, y3 = stars[2].second;

    
    int xr, yr;

  
    if (x1 == x2) xr = x3;
    else if (x1 == x3) xr = x2;
    else xr = x1;

  
    if (y1 == y2) yr = y3;
    else if (y1 == y3) yr = y2;
    else yr = y1;

    cout << xr << " " << yr << endl;

    return 0;
}
