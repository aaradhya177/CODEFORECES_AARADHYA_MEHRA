#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

// Function to solve a single test case
void solve() {
    int n, k;
    if (!(cin >> n >> k)) return;
    
    vector<string> strips(k);
    for (int i = 0; i < k; ++i) {
        cin >> strips[i];
    }

    // Precompute bitmasks for each column (0 to n-1)
    // col_masks[i] stores a bitset where the b-th bit is 1 if 
    // the character ('a' + b) is present in column i across any strip.
    vector<int> col_masks(n, 0);
    
    // Iterate columns first for better cache locality in the precomputation if strings were huge,
    // but here iterating rows then cols is standard for reading. 
    // We stick to the logic: for each strip, update the masks.
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < n; ++j) {
            col_masks[j] |= (1 << (strips[i][j] - 'a'));
        }
    }

    // Find all divisors of n and sort them
    vector<int> divisors;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i * i != n) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());

    // Iterate through divisors to find the smallest valid informativity
    for (int d : divisors) {
        string pattern = "";
        bool possible = true;

        // Try to build the repeating pattern of length d
        for (int r = 0; r < d; ++r) {
            // Start with all bits set (representing all 'a'-'z' are potentially valid)
            int common_mask = (1 << 26) - 1;
            
            // Intersect masks for all positions that correspond to this index in the pattern
            // Positions: r, r+d, r+2d, ...
            for (int i = r; i < n; i += d) {
                common_mask &= col_masks[i];
                // Optimization: if intersection becomes empty, this d is invalid
                if (common_mask == 0) {
                    possible = false;
                    break;
                }
            }

            if (!possible) break;

            // If possible, pick the lexicographically smallest valid character
            // __builtin_ctz counts trailing zeros to find the index of the first set bit
            int char_idx = __builtin_ctz(common_mask); 
            pattern += (char)('a' + char_idx);
        }

        if (possible) {
            // We found the minimal d. Construct the full string and print it.
            string res = "";
            for (int i = 0; i < n / d; ++i) {
                res += pattern;
            }
            cout << res << "\n";
            return;
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}