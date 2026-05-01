#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    vector<int> freq(26, 0);
    for(char c : s) {
        if(c >= 'a' && c <= 'z')
            freq[c - 'a'] = 1;   
    }
    int uniq = 0;
    for(int i = 0; i < 26; i++)
        uniq += freq[i];
    cout << uniq;
    return 0;
}
