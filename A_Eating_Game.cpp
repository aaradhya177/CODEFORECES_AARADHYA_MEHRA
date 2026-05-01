#include <iostream>
using namespace std;
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int max_dishes = 0;
            int possible_winners = 0;
            for (int i = 0; i < n; ++i) {
                int a;
                cin >> a; 
                if (a > max_dishes) {
                    max_dishes = a;
                    possible_winners = 1;
                } else if (a == max_dishes) {
                    possible_winners++;
                }
            }
            
            cout << possible_winners << "\n";
        }
    }
    return 0;
}