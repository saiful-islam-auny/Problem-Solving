#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,i,j,distress=0,ice;
    cin>>n>>x;
    long long int have = x ;
    char action;

    for(i=0; i<n; i++)
    {
        cin>>action>>ice;

        if(action=='+')
        {
            have = have + ice;
        }
        else
        {
            if(have<ice)
            {
                distress++;
            }
            else
            {
                have = have - ice;
            }
        }
    }

    cout<<have<<" "<<distress<<endl;


    
    return 0;
}