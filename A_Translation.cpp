#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    cin >> s1;
    string s2;
    cin>>s2;
    string s3 = s2;               
    reverse(s3.begin(), s3.end()); 

  

    if (s3 == s1)
        cout << "YES";
    else
        cout << "NO";
}
