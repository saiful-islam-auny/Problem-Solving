#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char s[100];
    int i,j=1,len;
    cin>>s;
    len = strlen(s);

    for(i=0; i<len; i++)
    {
        if(s[i]=='?' && s[len-j]=='?')
        {
            s[i] = 'a';
        }
        else if(s[i]=='?')
        {
            s[i] = s[len-j];
        }
        j++;
    }
    cout<<s<<endl;
    return 0;
}