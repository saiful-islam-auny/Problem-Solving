#include <bits/stdc++.h>

using namespace std;

int recur(int a, int b, int c, int k)
{
    int aa=a, bb=b, cc=c;

    if (a < b)
        swap(a, b);
    if (a < c)
        swap(a, c);
    if (b < c)
        swap(b, c);
    
    int x=a, y=b, z=c;

    if (a == b && b == c)
        return 1;
    if (a == b && b != c)
    {
        if(aa==c && cc==a)
        return -2;

        a = a - k;
        b = b - k;
        c = c + (2 * k);

        if (a == b && b == c)
            return 2;
        else
            recur(a, b, c, k);
    }

    else if (b == c && b != a)
    {
        if(aa==c && cc==a)
        return -3;
        a = a - (2 * k);
        b = b + k;
        c = c + k;

        if (a == b && b == c)
            return 3;
        else
            recur(a, b, c, k);
    }

    else if(a!=b && b!=c)
    {
        a = a-k;
        c = c+k;
        if(x==c && z==a)
            return -1;
        else
            recur(a, b, c, k);
    }
}

int main()
{
    int n, k, a, b, c, result;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c >> k;
        // if (a < b)
        //     swap(a, b);
        // if (a < c)
        //     swap(a, c);
        // if (b < c)
        //     swap(b, c);

        if ((a + b + c) % 3 == 0)
        {
            result = recur(a, b, c, k);
            if (result >= 1)
                cout << "Case " << i << " : Peacefully" << endl;
            else
                cout << "Case " << i << " : Fight" << endl;
        }
        else
            cout << "Case " << i << " : Fight" << endl;
    cout<<result<<endl;
    }

    return 0;
}