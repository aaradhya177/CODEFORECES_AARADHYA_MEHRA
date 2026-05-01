
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
    cin >> n;
    vector<long long> a(n); 
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<long long> b(n); 
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    vector<long long> pref(n);
    pref[0] = b[0];
    for(int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + b[i];
    }
    long long max_score = 0;
    for(int i = 0; i < n; i++) {
        long long x = a[i];
        long long strikes = n - i; 
        long long monsters_defeated = upper_bound(pref.begin(), pref.end(), strikes) - pref.begin();
        long long current_score = x * monsters_defeated;
        max_score = max(max_score, current_score);
    }
    cout << max_score << "\n";
    }
   
}