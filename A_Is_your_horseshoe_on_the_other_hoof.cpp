#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4];
    for(int i = 0; i < 4; i++)
        cin >> arr[i];

    set<int> s;
    int newshoe = 0;

    for(int i = 0; i < 4; i++) {
        if(s.count(arr[i]))       
            newshoe++;            
        else
            s.insert(arr[i]);     
    }

    cout << newshoe << endl;
    return 0;
}
