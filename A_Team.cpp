#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
   
    int ans=0;
    while(n--){
         int hojaega=0;
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
    for(int i=0;i<3;i++){
        if(arr[i]==1) hojaega++;
    }
    if(hojaega>=2){
        ans++;
    }


    }
    cout<<ans <<endl;
}