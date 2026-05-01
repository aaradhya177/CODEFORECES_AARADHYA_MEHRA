#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string number=0;
    for(int i=0;i<2893;i++){
        number+=i;
    }
    for(int i=0;i<number.length();i++){
        cout<<number[n]; 
    }

}