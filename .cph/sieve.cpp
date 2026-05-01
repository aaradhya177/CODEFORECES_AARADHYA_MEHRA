#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<bool> sieve(ll n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;

    for (ll i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    return prime;
}

int main() {
    ll n = 50;
    vector<bool> prime = sieve(n);

    cout << "Prime numbers up to " << n << ":\n";
    for (ll i = 2; i <= n; i++) {
        if (prime[i]) cout << i << " ";
    }
    cout << endl;

    return 0;
}
