#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        bool ok = false;   
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]*a[j] == 67){
                    ok = true;
                    break;
                }
            }
            if(ok) break;
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
