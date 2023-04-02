#include <iostream>

using namespace std;

class saiful
{
public:
    int i,j,k,r1,r2,c1,c2,sum=0,a[50][40],b[50][50],result[50][50];
    void input_auny1();
    void multi_auny2();
    void display_auny3();
};

void saiful :: input_auny1(void)
{
    up:
    cout<<"Enter First matrix row & column: ";
    cin>>r1>>c1;
    cout<<"Enter Second matrix row & column: ";
    cin>>r2>>c2;

    if(c1==r2)
    {
        //for first matrix input
        cout<<"Enter Matrix A:\n";
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c1; j++)
            {
                cout<<"A"<<"["<<i<<"]["<<j<<"]: ";
                cin>>a[i][j];
            }
            cout<<"\n";
        }
        cout<<"\n";
        //for second matrix input
        cout<<"Enter Matrix B:\n";
        for(i=0; i<r2; i++)
        {
            for(j=0; j<c2; j++)
            {
                cout<<"B"<<"["<<i<<"]"<<"["<<j<<"]: ";
                cin>>b[i][j];
            }
            cout<<"\n";
        }
    }

    else
    {
        cout<<"\nError! Matrix multiplication is not valid, Try again!\n\n";
        goto  up;
    }

}

void saiful :: multi_auny2(void)
{
    for(i=0; i<r1; i++)
    {
        for(j=0;  j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + a[i][k]*b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
}

void saiful :: display_auny3(void)
{
    cout<<"(AxB) Multiplication: \n";
    for(i=0; i<r1; i++)
    {
        cout<<"\t";
        for(j=0; j<c2; j++)
        {
            cout<<result[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

int main()
{
    saiful s;
    s.input_auny1();
    s.multi_auny2();
    s.display_auny3();

    return 0;
}
