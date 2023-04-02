#include <iostream>

using namespace std;

typedef class test
{
public:
    int n,i;
    int show_in(int a);
    int show_out();
}te;

int test :: show_in(int a)
{
    cout<<"Enter a number: ";
    n = a;
}

int test :: show_out(void)
{
    cout<<endl;
    for(i=1; i<=n; i++)
    {
        cout<<i<<"- Hi, i am your test class!"<<endl;
    }
}


int main()
{
    te t;
    t.show_in(20);
    t.show_out();
}
