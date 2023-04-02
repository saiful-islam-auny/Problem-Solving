#include <bits/stdc++.h>

using namespace std;

int main()
{
    float ans=0,i=0,r;
    int n;
    cout<<"Enter Decimal: ";
    cin>> n;


    while(n!=0)
    {
        r = n%2;
        ans = r*pow(10,i)+ans;
        n = n/2;
        i++;
    }
    
    cout<<"Binary: "<<ans;

    return 0;
}