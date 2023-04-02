#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,count=0;
    string s;

    cin>>n>>s;

    for ( i = 0; i < n; i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i] = s[i]+32;
    }

    sort(s.begin(), s.end());
    

    for ( i = 0; i < n; i++)
    {
            if(s[i]!=s[i+1])
                count++;
    }

    if(count == 26)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}