#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <math.h>

int main()
{
    int count = 0, t, i, j;
    char c_f[11] = "codeforces", s[11];
    scanf("%d ", &t);

    for (j = 0; j < t; j++)
    {
        gets(s);

        for ( i = 0; i < 11; i++)
        {
            if (c_f[i] != s[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
        count = 0;
    }

    return 0;
}