#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n)
{
    if (n == 0 || n == 1)
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
    int arr[n];
    int one = 0;
    int twos = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        if (x == 1)
            one++;
        else
            twos++;
    }
    if (twos == 0)
    {
        for (int i = 0; i < one - 1; i++)
            cout << "1 ";
    }
    else if (one == 0)
    {
        for (int i = 0; i < twos - 1; i++)
            cout << "2 ";
    }
    else
    {
        cout << "2 1 ";
        for (int i = 0; i < twos - 1; i++)
            cout << "2 ";
        for (int i = 0; i < one - 1; i++)
            cout << "1 ";
    }
}