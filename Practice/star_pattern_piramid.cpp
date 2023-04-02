#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,c=1;
    cin>>n;

    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j<=n-i ; j++)
        {
            cout<<"- ";
        }
        for(j=1 ; j<=(i*2-1); j++)
        {
            cout<<"* ";
            // c++;
        }
        cout<<endl;
        
    }
    
    return 0;
}