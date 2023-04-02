#include <bits/stdc++.h>

using namespace std;

int fib(int n)
{
    int i,a=0,b=1,next;
    if(n==1)
        return 0;
    if(n==2)
        return 1;

    for(i=2; i<n; i++)
    {
        next = a+b;
        a = b;
        b = next;
    }
    return next;
}

int main()
{
    int n;
    cout<<"Enter series term: ";
    cin>>n;
    cout<<"Fibonacci series of "<<n<<" term : "<<fib(n);
    
    return 0;
}