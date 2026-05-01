#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 10000; i++)
    {
        int answer = n * i + 1;
        if (!isPrime(answer))
        {
            cout << i;
            break;
        }
    }
}