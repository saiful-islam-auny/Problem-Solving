#include<iostream>
#include<string>

using namespace std;

int main()
{
    char s[1000000];
    long long int i=0;
    cin.getline(s,1000000);

    while(s[i]!='\\')
    {
        cout<<s[i];
        i++;
    }
    return 0;
}