#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[100],temp;
    int i,j;
    cin>>str;

    for(i=0; i<strlen(str); i++)
    {
        for(j=i+1; j<strlen(str); j++)
        {
            if(str[j]<str[i])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    cout<<str;
    return 0;
}
