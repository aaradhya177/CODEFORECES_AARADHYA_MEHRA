#include <bits/stdc++.h>
using namespace std;
#define ll long long 

bool check_prime(ll n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main(){
    if (check_prime(2))
        cout << "prime";
    else
        cout << "false";
}
