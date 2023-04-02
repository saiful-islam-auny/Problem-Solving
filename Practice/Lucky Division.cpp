#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int n,m,i,r,len,luc_count=0;
    cin>>n;
    m = n;
    len = floor(log10(n) + 1);

    for(i=0; i<len; i++)
    {
        r = n%10;
        if(r==4 || r==7)
        {
            luc_count++;
            n = n/10;
        }
        else
            break;
    }

    if(luc_count==len)
    {
        cout<<"YES";
    }
    else if(m%7==0 || m%4==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
