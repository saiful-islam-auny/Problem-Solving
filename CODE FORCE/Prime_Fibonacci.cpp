#include <bits/stdc++.h>

using namespace std;

int fib(int x)
{
    if (x <= 1)
        return x;
    else
        return fib(x - 1) + fib(x - 2);
}

int main()
{
    int t, n, i, j, flag;
    cin >> t;

    for (j = 1; j <= t; j++)
    {
        flag = 1;
        cin >> n;
        n = fib(n - 1);

        if (n == 1 || n == 0)
        {
            flag = 0;
        }
        else
        {
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            cout << "prime" << endl;
        }
        else
            cout << "not prime" << endl;
    }
    return 0;
}