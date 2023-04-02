#include <iostream>

using namespace std;

int main()
{
    int n,i,k;
    cin>>n>>k;

    for(i=1; i<=k; i++)
    {
        if(n%10!=0)
        {
            n--;
        }
        else
            n = n/10;
    }
    cout<<n;
    return 0;
}
