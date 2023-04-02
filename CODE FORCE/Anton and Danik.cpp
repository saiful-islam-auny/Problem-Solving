#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,i,j,c_a=0,c_d=0;
    cin>>n;
    char s[n];
    cin>>s;

    for(i=0; i<n; i++)
    {
        (s[i]=='A')? c_a++:c_d++;
    }

    if(c_a==c_d)
        cout<<"Friendship";
    else if(c_a>c_d)
        cout<<"Anton";
    else
        cout<<"Danik";
    return 0;
}
