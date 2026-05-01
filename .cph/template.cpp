#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll binary_search(vector<int>v,int target){
   ll low = 0;
    ll high = v.size() - 1;

    
    while(low<=high){
        ll mid=(low+high)/2;
        if(v[mid]==target) return mid;
        if(target>v[mid]) low = mid+1;
        else high=v[mid]-1;
    }
    return -1;
}

void print_factors(ll n)  {
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            if (i != (n / i))
                cout << n / i << endl; // order of sqrt n
        }
    }
}
bool check_prime(ll n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    for (ll i = 0; i <= 100; i++)
    {
        if (check_prime(i))
        {
            cout << i << endl;
        }
        }
}
