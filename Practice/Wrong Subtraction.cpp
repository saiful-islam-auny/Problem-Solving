#include <iostream>

using namespace std;

int main()
{
    int n,i,n_len,k;
    cin>>n>>k;

    for(i=0; i<k; i++)
    {
        if(n%10==0)
        {
            n = n/10;
        }
        else
            n--;
    }

    cout<<n;
}
