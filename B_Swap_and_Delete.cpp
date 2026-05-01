#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '0') {
                if (count1 > 0) {
                    count1--;
                } else {
                    cout << s.length() - i << "\n";
                    goto next;
                }
            } else {
                if (count0 > 0) {
                    count0--;
                } else {
                    cout << s.length() - i << "\n";
                    goto next;
                }
            }
        }
        cout << 0 << "\n";
        next: ;
    }
    return 0;
}