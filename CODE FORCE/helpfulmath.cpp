#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int length = s.size(), i, j=0;
    char a[length] ;

    for (i = 0; i < length; i++)
    {
        if (s[i] != '+')
        {
            a[j] = s[i];
            j++;
        }
    }
    sort(a, a+j);

    for ( i = 0; i < j; i++)
    {
        cout<<a[i];
        if(i!=j-1)
        cout<<'+';
    }
    


    return 0;
}