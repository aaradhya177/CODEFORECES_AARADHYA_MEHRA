#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> t1, t2, t3, t6;
    
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        
        if (x % 6 == 0) {
            t6.push_back(x);
        } else if (x % 2 == 0) {
            t2.push_back(x);
        } else if (x % 3 == 0) {
            t3.push_back(x);
        } else {
            t1.push_back(x);
        }
    }
    
    // Construct the optimal array
    vector<int> result;
    result.insert(result.end(), t2.begin(), t2.end());
    result.insert(result.end(), t1.begin(), t1.end());
    result.insert(result.end(), t3.begin(), t3.end());
    result.insert(result.end(), t6.begin(), t6.end());
    
    // Output the reordered array
    for (int i = 0; i < n; ++i) {
        cout << result[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t; // Uncomment if there are multiple test cases
    while (t--) {
        solve();
    }
    return 0;
}