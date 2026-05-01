#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
cin >> n >> m;

vector<vector<char>> mat(n, vector<char>(m));
int flag=0;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> mat[i][j];
        if (mat[i][j] == 'C'||mat[i][j] == 'M'||mat[i][j] == 'Y'||mat[i][j] == 'G'){
            flag=1;
            
        }
        else if(mat[i][j] == 'B'||mat[i][j] == 'W'){
             flag=2;
        }
    }
}
if(flag==1) cout<<"#Color";
else if(flag==2) cout<<"#Black&White";




}


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    bool color = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char ch;
            cin >> ch;
            if (ch == 'C' || ch == 'M' || ch == 'Y') {
                color = true;
            }
        }
    }

    if (color) cout << "#Color\n";
    else cout << "#Black&White\n";

    return 0;
}
