#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long maxCost = 0;

        
        for (long long row = 1; row <= n; row++) {
            for (long long col = 1; col <= n; col++) {

                
                long long value = (row - 1) * n + col;

               
                long long cost = value;

             
                if (row > 1)  cost += value - n; 
                if (row < n)  cost += value + n; 
                if (col > 1)  cost += value - 1; 
                if (col < n)  cost += value + 1; 

                
                maxCost = max(maxCost, cost);
            }
        }

        cout << maxCost << "\n";
    }

    return 0;
}
