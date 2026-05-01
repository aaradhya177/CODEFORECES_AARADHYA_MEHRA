#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while(t--){
        long long a,b,xk,yk,xq,yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;

        set<pair<long long,long long>> k, q;

        long long dx[8] = {a,a,-a,-a,b,b,-b,-b};
        long long dy[8] = {b,-b,b,-b,a,-a,a,-a};

        for(int i=0;i<8;i++){
            k.insert({xk + dx[i], yk + dy[i]});
            q.insert({xq + dx[i], yq + dy[i]});
        }

        int ans = 0;
        for(auto p : k){
            if(q.count(p)) ans++;
        }

        cout << ans << "\n";
    }
}
