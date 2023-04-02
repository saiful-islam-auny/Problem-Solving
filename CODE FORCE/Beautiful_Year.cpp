#include <iostream>

using namespace std;

int main()
{
    int y,a,b,c,d,n;
    cin>>y;

    while(y<=9000)
    {
        y++;
        n = y;

        a = n%10;
            n = n/10;
        b = n%10;
            n = n/10;
        c = n%10;
            n = n/10;
        d = n%10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            cout<<y;
            break;
        }
    }
    return 0;
}
