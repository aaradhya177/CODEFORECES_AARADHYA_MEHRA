#include<bits/stdc++.h>
using namespace std;

int main() {
    double juice = 0;
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        juice += nums[i] ;  
    }

    cout << fixed << setprecision(12) << (juice / n);
}
