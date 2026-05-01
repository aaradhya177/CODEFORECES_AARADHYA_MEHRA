#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> x(4);
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }

    sort(x.begin(), x.end());

    int S = x[3];
    for (int i = 0; i < 3; i++) {
        cout << S - x[i] << " ";
    }
    cout << endl;

    return 0;
}