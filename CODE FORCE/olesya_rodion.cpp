#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n, t, sum = 0, mul = 1;
    cin >> n >> t;

    if (n == 1 && t == 10)
        cout << -1 << endl;
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (t == 10)
            {
                cout<<1;
                if (t == 10 && i == n - 1)
                {
                    cout<<0;
                    break;                    
                }

            }
            else
                cout << t;
        }
    }

    return 0;
}