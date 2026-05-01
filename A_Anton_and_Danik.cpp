#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int anton_won=0;
    int dainik_won=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') anton_won++;
        else dainik_won++;
    }
    if(anton_won>dainik_won)cout<<"Anton";
    else if(anton_won<dainik_won) cout<<"Danik";
    else cout<<"Friendship";
    
        
    
}