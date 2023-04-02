#include <bits/stdc++.h>

using namespace std;

int reverse_str(int n)
{
    int r,sum=0;

    while(n!=0)
    {
        r = n%10;

        if((sum>INT_MAX/10) || (sum<INT_MIN/10))
        {
               return false; 
        }

        sum = sum*10 + r;
        n = n/10;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<reverse_str(n);
    return 0;
}