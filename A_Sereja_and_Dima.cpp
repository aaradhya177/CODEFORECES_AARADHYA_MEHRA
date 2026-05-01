#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    int left = 0, right = n-1;
    int sereja = 0, dima = 0;
    int turn = 0;
    while(left <= right){
        int pick;
        if(v[left] > v[right]){
            pick = v[left];
            left++;
        }
        else{
            pick = v[right];
            right--;
        }
        if(turn % 2 == 0) sereja += pick;
        else dima += pick;
        turn++;
    }

    cout << sereja << " " << dima;
}