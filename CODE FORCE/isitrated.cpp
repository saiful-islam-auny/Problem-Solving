#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, rated=0, maybe=0, a,b,a2=4127,b2=0;
    cin>>n;

    for ( i = 0; i < n; i++)
    {
        cin>>a>>b;
        if(a!=b)
            rated++;
        if(a2<a)
            maybe++;
        a2 = a;
    }
    
    if(rated>0)
        cout<<"rated"<<endl;
    else if(rated==0 && maybe>0)
        cout<<"unrated"<<endl;
    else
        cout<<"maybe"<<endl;
    

    return 0;
}