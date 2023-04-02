#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,min,max,l_index,h_index, result;
    cin>>n;
    int a[n],b[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    sort(b, b+n, greater<int>());
    min = b[n-1]; 
    max = b[0];

    for(i=0; i<n; i++)
    {
        if(a[i]==max)
            break;
    }
    
    for(j=n-1; j>=0; j--)
    {
        if(a[j]==min)
            break;
    }

    result = i + ((n-1)-j);
    if(j<i)
    {
        cout<<result-1<<endl;
    }
    else{
        cout<<result<<endl;

    }




    return 0;
}