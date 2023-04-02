#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100];
    int i,j,l=0,h=0;
    cin>>s;

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            l++;
        }

        if(s[i]>=65 && s[i]<=90)
        {
            h++;
        }

    }

    if(l>h || l==h)
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i] = s[i]+32;
            }
        }
    }

    if(h>l)
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i] = s[i]-32;
            }

        }
    }

    for(i=0; i<strlen(s); i++)
    {
        cout<<s[i];
    }

    return 0;
}
