#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;

int main()
{
    optimize()
    int a, b, c, max, t, i;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> a >> b >> c;

        if (a >= b && a >= c)
        {
            max = a;
        }
        else if (b >= a && b >= c)
        {
            max = b;
        }
        else
        {
            max = c;
        }

        if (a == b && b == c)
            cout << 1 << " " << 1 << " " << 1 << endl;

        else if (a == b && c!= max)
            cout << 1 << " " << 1 << " " << (max - c) + 1 << endl;
        else if (b == c && a!= max)
            cout << (max - a) + 1 << " " << 1 << " " << 1 << endl;
        else if (a == c && b!= max)
            cout << 1 << " " << (max-b)+1 << " " <<1 << endl;
        
        else if (a == b && c == max)
            cout << (max - a) + 1 << " " << (max - b) + 1 << " " << 0 << endl;
        else if (b == c && a == max)
            cout << 0 << " " << (max-b)+1 << " " << (max - c) + 1 << endl;
        else if (a == c && b == max)
            cout << (max - a) + 1 << " " << 0 << " " <<(max - c) + 1 << endl;

        else if (a != b && c == max)
            cout << (max - a) + 1 << " " << (max - b) + 1 << " " << 0 << endl;
        else if (b != c && a == max)
            cout << 0 << " " << (max-b)+1 << " " << (max - c) + 1 << endl;
        else if (a != c && b == max)
            cout << (max - a) + 1 << " " << 0 << " " <<(max - c) + 1 << endl;
    }

    return 0;
}