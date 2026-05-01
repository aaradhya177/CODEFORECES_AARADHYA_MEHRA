#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        vector<string> board(10);
        for (int i = 0; i < 10; i++) cin >> board[i];
        
        int score = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (board[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j}) + 1;
                    score += ring;
                }
            }
        }
        cout << score << endl;
    }
}
