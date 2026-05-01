#include <bits/stdc++.h>
using namespace std;
bool checkstatement(string statement){
    if(statement=="X++" || statement=="++X"){
        return true;
    }
    else return false;

}
int main(){
    int n;
    cin>>n;
   int x=0;
    for (int i = 0; i < n; i++)
    {
        string statement;
        cin>> statement;
   
    if(checkstatement(statement)){
        x++;
    }
    else{
        x--;
    }
}
    
    cout<<x<<"\n";
}
