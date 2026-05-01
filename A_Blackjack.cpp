#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int target = n - 10;

    if (target == 10)
        cout << 15;              
    else if (target == 1)
        cout << 4;              
    else if (target == 11)
        cout << 4;               
    else if (target >= 2 && target <= 9)
        cout << 4;               
    else
        cout << 0;               

    return 0;
}
