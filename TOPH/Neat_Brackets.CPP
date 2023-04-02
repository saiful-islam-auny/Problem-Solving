#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j, count=0, size;
    string str;
    getline(cin, str);
    size = str.size();

    if (size % 2 == 0)
    {
        for (i = 0; i < size; i++)
        {
            if (str[i]=='(')
            {
                for(j=i+1; j<size; j++)
                {
                    if(str[j]==')')
                    {
                        count++;
                        str[j]='O';
                        break;
                    }
                }
            }
        }
        // cout<<count<<endl;
        // cout<<size<<endl;
        if(count==(size/2))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    else
        cout << "No" << endl;

    return 0;
}