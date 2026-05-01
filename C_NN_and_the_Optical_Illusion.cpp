#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    double r;
    cin >> n >> r;
    double PI = acos(-1);   
    double angle = PI / n;
    double R = (r * sin(angle)) / (1 - sin(angle));
    cout << fixed << setprecision(7) << R << endl;
}
