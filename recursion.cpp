#include <bits/stdc++.h>
using namespace std;

int prime_num(int n)
{
    if (n == 0)
        return 0;
    else if(n==1)
        return 1;

    return prime_num(n-1)+prime_num(n-2);
}

int main()
{
    cout << prime_num(3);
    
}
