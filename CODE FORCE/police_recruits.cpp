#include <bits/stdc++.h>

using namespace std;

int main()
{
    int have=0,x,i,j,count=0,n;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if((have+x)<0)
        {
            count++;
        }
        else
            have = have+x;
    }
    cout<<count<<endl;
    return 0;
}