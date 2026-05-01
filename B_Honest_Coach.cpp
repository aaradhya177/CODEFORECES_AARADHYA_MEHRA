#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> mini;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                mini.push_back(abs(a[i]-a[j]));
            }
        }
        cout<< *min_element(mini.begin(), mini.end())<<endl;
    }
}
// optimal approach

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int ans = INT_MAX;
        for (int i = 1; i < n; i++) {
            ans = min(ans, a[i] - a[i - 1]);
        }

        cout << ans << endl;
    }
}
