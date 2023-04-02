#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./", m;
    char direction;
    int pos,i;
    
    cin>>direction;
    cin>>m;

    for ( i = 0; i < m.size(); i++)
    {
        if(direction=='L') 
        {
            pos = s.find(m[i]);
            cout<<s[pos+1];
        }
        else
        {
            pos = s.find(m[i]);
            cout<<s[pos-1];
        }   
    }
    
       
    return 0;
}