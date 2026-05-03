#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n;
    // Read the target number of substrings
    if (!(cin >> n)) return;
    
    vector<string> words;
    
    // Keep going until we've accounted for exactly 'n' substrings
    while (n > 0) {
        int length = 1;
        
        // Find the largest word length whose substring count is <= n
        // Formula for substrings: L * (L + 1) / 2
        while ((length + 1) * (length + 2) / 2 <= n) {
            length++;
        }
        
        // Add a word of this length to our list (using the character 'a')
        words.push_back(string(length, 'a'));
        
        // Subtract the number of substrings this word provides from our target
        n -= length * (length + 1) / 2;
    }
    
    // Print the generated words joined by spaces
    for (size_t i = 0; i < words.size(); ++i) {
        cout << words[i] << (i == words.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O (standard practice in competitive programming)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}