#include<iostream>

using namespace std;

int main()
{
    int n,pi,qi,i,j,count=0;
    cin>>n;
    int a[n][2];
     for(i=0; i<n; i++)
     {
        for(j=0; j<2; j++)
        {
            cin>>a[i][j];
            if(j==0)
            {
                pi = a[i][j];
            }
            else
                qi = a[i][j];
        }
        if((pi+2)<=qi)
        {
            count++;
        }

     }
     cout<<count<<endl;
    return 0;
}