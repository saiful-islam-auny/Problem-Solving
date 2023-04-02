#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s,n,i,j,count=0;
    cin>>s>>n;
    int a[n], b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }

    for( i=0; i<n-1; i++)
    {
        for( j=0; j<n-(i+1); j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
            }
        }
    }

    for(i=0; i<n; i++)
    {
        if(s>a[i])
        {
            s+=b[i];
            count++;
        }
    }

    if(count==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}