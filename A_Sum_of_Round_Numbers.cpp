#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> result;
        int place = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                result.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }

        cout << result.size() << endl;
        reverse(result.begin(), result.end()); // reverse to maintain order
        for (int x : result) cout << x << " ";
        cout << endl;
    }
    return 0;
}
 