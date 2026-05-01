#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int upper = 0, lower = 0;

    for (char ch : s) {
        if (ch >= 'A' && ch <= 'Z')
            upper++;
        else if (ch >= 'a' && ch <= 'z')
            lower++;
    }

   
    if (upper > lower) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

 
   
    cout << s << endl;

    return 0;
}
