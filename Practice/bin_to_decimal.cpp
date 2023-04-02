#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int i=0, n,r,ans=0;
    cout<<"Enter binary digits: ";
    cin>>n;

    while(n!=0)
    {
        r = n%10;
        ans = ans + r*pow(2,i);
        n = n/10;
        i++;
    }
    cout<<"Decimal : "<<ans;
    

    return 0;
}