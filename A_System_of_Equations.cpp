#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int countSolutions = 0;

    
    for (int a = 0; a <= 31; a++) {
        for (int b = 0; b <= 31; b++) {

            if (a * a + b == n && a + b * b == m) {
                countSolutions++;
            }

        }
    }

    cout << countSolutions << endl;
    return 0;
}
