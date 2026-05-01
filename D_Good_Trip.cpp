#include <iostream>
#include <vector>

using namespace std;

long long MOD = 1e9 + 7;

// Function to calculate (base^exp) % MOD
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Function to calculate modular inverse
long long modInverse(long long n) {
    return power(n, MOD - 2);
}

void solve() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long sum_f = 0;
    for (int i = 0; i < m; ++i) {
        int u, v; 
        long long f;
        cin >> u >> v >> f;
        sum_f = (sum_f + f) % MOD;
    }

    // M = Total number of pairs = n * (n - 1) / 2
    long long M = (n * (n - 1)) % MOD;
    M = (M * modInverse(2)) % MOD;

    long long invM = modInverse(M);

    // Part 1: Contribution from initial weights
    // Formula: k * sum_f / M
    long long term1 = (k * sum_f) % MOD;
    term1 = (term1 * invM) % MOD;

    // Part 2: Contribution from increases
    // Formula: m * k * (k - 1) / (2 * M^2)
    
    // Numerator: m * k * (k - 1)
    long long term2_num = (m * k) % MOD;
    term2_num = (term2_num * ((k - 1 + MOD) % MOD)) % MOD; // (k-1) handled safely

    // Denominator: 2 * M * M
    long long term2_den = (2 * M) % MOD;
    term2_den = (term2_den * M) % MOD;
    
    long long term2 = (term2_num * modInverse(term2_den)) % MOD;

    // Total Answer
    long long ans = (term1 + term2) % MOD;
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}