#include <iostream>
using namespace std;
int main()
{
    
    
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int even_cnt=0;
        int odd_cnt=0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even_cnt++;
            }
            else
            {
                odd_cnt++;
            }
        }

        if (even_cnt == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    
}
