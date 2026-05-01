#include <bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int sz=s.size();
string ans="";
for(int i=0;i<sz-1;){
    if(s[i]=='.'){
        ans+="0";
        i++;
    }
    else if(s[i]=='-' && s[i+1]=='.'){
        ans+="1";
        i+=2;
    }
    else {
        ans+="2";
        i+=2;
    } 
}
if(s.back()=='.')ans+="0";
cout<<ans<<endl;

}
