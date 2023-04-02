#include <bits/stdc++.h>

using namespace std;

int gcd_formula(int a, int b)
{
    int temp;
    while (b!=0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;    
}

// int gcd_my(int small, int big)
// {
//     for(int i=sqrt(small); i>=1; i++)
//     {
//         if(small%i==0)
//         {
//             if((small/i)>i && big%((small/i))==0)
//                 return (small/i);

//             else if(big%i==0)
//             {
//                 return i;
//             }
//             else
//                 continue;
//         }
//     }
// }

int main()
{
    int a,b,temp;
    cin>>a>>b;

    cout<<gcd_formula(a,b)<<endl;

    // if(b<a)
    //     {
    //         temp = a;
    //         a = b;
    //         b = temp;
    //     }
    // cout<<gcd_my(a,b);

    
    return 0;
}