#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;

        if(s.length()>10){
            int number=0;
            for(int i=1;s[i + 1] != '\0';i++){
                number++;
            }
            cout<< s[0]<<number<<s[s.length()-1]<<endl;
        }
        else cout<<s<<endl;
    }
    
}