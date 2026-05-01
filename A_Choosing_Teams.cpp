#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int cnt=0;
      for(int i=0;i<n;i++){
        if(v[i]+k <= 5) cnt++;
    }
    int ans=cnt/3;
    cout<<ans;

}
