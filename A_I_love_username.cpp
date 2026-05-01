#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int bada=0;
    int chota=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxSoFar = a[0];
for (int i = 1; i < n; i++) {
    if (a[i] > maxSoFar) {
        bada++;
    }
    maxSoFar = max(maxSoFar, a[i]);
}
int minSoFar = a[0];
for (int i = 1; i < n; i++) {
    if (a[i] < minSoFar) {
        chota++;
    }
    minSoFar = min(minSoFar, a[i]);
}
cout<<bada+chota<<endl;

}