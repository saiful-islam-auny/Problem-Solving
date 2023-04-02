#include<iostream>
#include<string.h>

using namespace std;
    //palindrome number check
int main()
{
    int n,m,count=0,len,i,j,p=1,a[100],r;
    cin>>n;
    m = n;

    while(n!=0) // number count
    {
        n = n/10;
        count++;
    }
    len = count;

    for(j=len-1; j>=0; j--) //inputing single numbers in the array
    {
        r = m%10;
        a[j] = r;
        m = m/10;
    }


    for(j=0; j<len/2; j++) //palindrome checking
    {
        if(a[j]!=a[len-(j+1)])
        {
            p = 0;
            break;
        }
    }
    if(p==1)
    {
        cout<<"PALINDROME"<<endl;
    }
    else
        cout<<"NOT PALINDROME"<<endl;

    return 0;
}