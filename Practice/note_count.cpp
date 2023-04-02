#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i=1,note;
    cin>>n;

    switch (i)
    {
    case 1:
        note = n/100;
        cout<<"100 note: " <<note<<endl;
        n = n - note*100;
    case 2:
        note = n/50;
        cout<<"50 note: " <<note<<endl;
        n = n - note*50;
    case 3:
        note = n/20;
        cout<<"20 note: " <<note<<endl;
        n = n - note*20;
    case 4:
        note = n/10;
        cout<<"10 note: " <<note<<endl;
        n = n - note*10;
    case 5:
        note = n/5;
        cout<<"5 note: " <<note<<endl;
        n = n - note*5;
    case 6:
        cout<<"1 note: " <<n<<endl;
    
    }
    return 0;
}