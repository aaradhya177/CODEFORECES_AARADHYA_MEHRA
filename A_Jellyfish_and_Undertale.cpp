#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;      
        cin>>a>>b>>n;
        long long arr[n];
        long long time=b;
        for (long long i = 0; i < n; i++)       
        {
            cin >> arr[i];
            time+=min(a-1,arr[i]);
        }

       cout<<time<<endl;
        
    }
}
