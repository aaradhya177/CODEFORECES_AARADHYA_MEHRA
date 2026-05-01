#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long S = n * (n + 1) / 2;   
    long long rem = m % S;          

    for (long long i = 1; i <= n; i++) {
        if (rem < i) {
            cout << rem;
            return 0;
        }
        rem -= i;                   
    }

    
    cout << rem;
    return 0;
}
