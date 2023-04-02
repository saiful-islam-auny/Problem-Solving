#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, i, j, r_evil = 0, c_evil = 0, total_box;
    cin >> r >> c;
    char a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < r; i++) // Row evil
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == 'S')
            {
                r_evil++;
                break;
            }
        }
    }

    for (i = 0; i < c; i++) // column evil
    {
        for (j = 0; j < r; j++)
        {
            if (a[j][i] == 'S')
            {
                c_evil++;
                break;
            }
        }
    }

    total_box = ((r - r_evil) * c + (c - c_evil) * r);
    
    cout<<total_box-((r-r_evil)*(c-c_evil))<<endl;

    return 0;
}