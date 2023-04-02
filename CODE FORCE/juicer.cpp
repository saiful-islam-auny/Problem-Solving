#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,n, b, d, count = 0, sum = 0;
    cin >> n >> b >> d;

    for (int i = 0; i < n; i++)
    {

        cin >> a;
        if (a > b)
            continue;
        sum += a;
        if (sum > d)
        {
            count++;
            sum = 0;
        }
    }

    cout <<count;
     return 0;
}