#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<int>v;
for (int i = 1; i < 500; i++)
{
    v.push_back(i*(i+1)/2);
}
 if(find(v.begin(), v.end(), n) != v.end()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
