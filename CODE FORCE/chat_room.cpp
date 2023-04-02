#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100],c[]="hello";
    int i,j,k=0,com=0;
    cin>>s;

    for(i=0; i<strlen(c); i++)
    {
        for(j=k; j<strlen(s); j++)
        {
            if(c[i]==s[j])
            {
                com++;
                k = j+1;
                break;
            }
        }
    }
    if(strlen(c)==com)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
