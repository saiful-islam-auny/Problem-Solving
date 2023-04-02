#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,j=0;
    char s[100],t[100];
    cin>>s>>t;

    if(strcmp(s,strrev(t))==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

    return 0;
}
