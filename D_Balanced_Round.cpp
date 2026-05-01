#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        ll longe=1,cur=1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k) cur++;
            else cur=1;
            longe=max(longe,cur);
        }
        cout<<n-longe<<"\n";
    }
}
