#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,i,j;
    cin>>n;
    int ar[n][3];

    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>ar[i][j];
        }
    }


    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
            {
                a =ar[i][j];
            }
            else if(j==1)
            {
                b =ar[i][j];
            }
            else if(j==2)
            {
                c =ar[i][j];
            }
        }

        if(a>b && a>c)
        {
            if(a*a == b*b + c*c)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

        if(b>a && b>c)
        {
            if(b*b == a*a + c*c)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

        else
        {
            if(c*c == a*a + b*b)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }

    }

    return 0;
}
