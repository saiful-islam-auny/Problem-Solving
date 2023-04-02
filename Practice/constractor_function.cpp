#include <iostream>

using namespace std;

class auny
{
public:
    int a,b,sum;
    void show();
    auny (int x,int y);
};

auny :: auny(int x, int y)
{
    a=x;
    b=y;
}

void auny :: show()
{
    sum = a+b;
    cout<<sum;
}

int main()
{
    auny a(505,5);
    a.show();

    return 0;
}
