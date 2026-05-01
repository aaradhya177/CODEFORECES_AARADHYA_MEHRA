#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }
    long long ans = 0;
    ans+=a[n-1];
    long long mx=a[n-1]-1;
    for(long long i=n-2;i>=0;i--){
        ans+=min(mx,a[i]);
         mx=min(mx,a[i])-1;
         if(mx<=0) break;
    }
    cout<<ans<<"\n";
}