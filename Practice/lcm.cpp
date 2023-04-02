#include <bits/stdc++.h>

using namespace std;

int gcd_formula(int a, int b)
{
    int temp;
    while (b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;

}

int lcm(int a, int b, int gcd)
{
    return a*b/gcd;     //gcd(a,b) x lcm(a,b) = axb
}


int main()
{
    int a,b,temp,gcd;
    cin>>a>>b;

    gcd = gcd_formula(a,b);

    cout<<"LCM: "<<lcm(a,b,gcd);

    
    return 0;
}