#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, int> marks;
    marks["auny :"] = 90;
    marks["araf :"] = 80;
    marks["sifat :"] = 50;
    marks["nitu :"] = 950;
    marks["mou :"] = 80; 
    marks["no one :"] = 70;
    marks["janina :"] = 50;


    map <string, int> :: iterator iter;

    for(iter=marks.begin(); iter!=marks.end(); iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }

    cout<<"\nSIZE: "<<marks.size()<<endl;
    cout<<"MAX SIZE: "<<marks.max_size()<<endl;
    return 0;
}