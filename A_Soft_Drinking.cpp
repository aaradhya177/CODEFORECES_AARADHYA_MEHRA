#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;  
    int totalLimes = c * d;  
    int totalSalt = p;

    int drinkToasts = totalDrink / (n * nl);
    int limeToasts = totalLimes / n;
    int saltToasts = totalSalt / (n * np);

    int result = min({drinkToasts, limeToasts, saltToasts});

    cout << result << endl;
}
