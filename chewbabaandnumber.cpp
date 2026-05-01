#include <bits/stdc++.h>
using namespace std;

string reversal(string n) {
    for (int i = 0; i < n.size(); i++) {
        int digit = n[i] - '0';
        int inverted = 9 - digit;

        
        if (i == 0 && inverted == 0) continue;

        if (inverted < digit)
            n[i] = inverted + '0';
    }
    return n;
}

int main() {
    string n;
    cin >> n;
    cout << reversal(n) << "\n";
}
