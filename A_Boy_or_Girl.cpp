#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;

set<char> st;

for (char c : s) {
    st.insert(c);
}
int bc= st.size();  
if(bc%2==0) cout<< "CHAT WITH HER!";
else cout<< "IGNORE HIM!";




}
