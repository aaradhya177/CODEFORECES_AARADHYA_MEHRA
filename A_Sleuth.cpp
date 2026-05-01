#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int i = s.size() - 1;

   
    while (i >= 0 && !isalpha(s[i])) {
        i--;
    }

   
    while (i >= 0 && isalpha(s[i]) && isupper(s[i])) {
        i--;
    }

    if (i < 0) {
        cout << "No lowercase alphabet found!";
        return 0;
    }

    char last = s[i]; 
    bool isVowel = (last=='a' || last=='e' || last=='i' || last=='o' || last=='u');

    if (isVowel)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
