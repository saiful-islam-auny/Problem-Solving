#include <iostream>

using namespace std;

int main()
{
    char s[50],temp;
    int n,t,i,j;
    cin>>n>>t;

    cin>>s;

    for(i=0; i<t; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(s[j]<s[j+1])
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
                j++;

            }
        }
    }
    cout<<s;

    return 0;
}
