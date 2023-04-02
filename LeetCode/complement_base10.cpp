#include <bits/stdc++.h>

using namespace std;


int bin_dec(int b)          // binary to decimal then return to dec_bin
{
        int i=0, r,ans=0;
    
    while(b!=0)
    {
        r = b%10;
        ans += r*pow(2,i);
        b = b/10;
        i++;
    }

    return ans;
}

int dec_bin(int d)          // decimal to binary then complement after calling bin_dec, then return to main.
{
    int i=0;
    float r, ans=0;

    while (d!=0)        
    {
        r = d%2;
        if(r!=0)
        {
            ans = 0*pow(10,i)+ans;
        }
        else
            ans = 1*pow(10,i)+ans;

        d = d/2;
        i++;
    }

    return bin_dec(ans);
}


int main()
{
    int decimal;
    cin>>decimal;

    cout<< dec_bin(decimal)<<endl;        
    return 0;
}




//leatcode solution

// class Solution {
// public:
//     int bitwiseComplement(int n) {

//     int mask=0,m,ans;
//     m = n;
//     if(n==0)
//     {
//         return 1;
//     }

//     while (m!=0)
//     {
//         mask = mask<<1 | 1;
//         m = m>>1;
//     }
//     ans = (~n) & mask;
    
//     return ans;
        
//     }
// };