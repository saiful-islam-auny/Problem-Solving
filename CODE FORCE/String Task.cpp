#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[100],a[100];
    int i,j=0;
    cin>>s;

    for(i=0; i<strlen(s); i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i] = s[i]+32;
        }

        if(s[i]== 'a' || s[i]== 'e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u')
        {
            continue;
        }
        else
            cout<<"."<<s[i];
    }

    return 0;
}
