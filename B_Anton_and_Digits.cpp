#include<bits/stdc++.h>
using namespace std;
int main(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;

    int n1= min(k2,min(k5,k6));
    int n2= min((k2-n1),k3);
    int answer = n2*32 + n1*256;
    cout<< answer<<endl;
}c