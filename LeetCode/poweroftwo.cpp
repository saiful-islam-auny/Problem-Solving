#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r, i;
    cin >> n;

    while (n != 1)
    {
        if (n % 2 != 0)
        {
            break;
        }
        r = n % 2;
        n = n / 2;
    }
    if (r == 0 && n == 1 || n == 1)
        cout << "true";
    else
        cout << "false";

    return 0;
}

// leetCode

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//     if (n <= 0 ) {
//         return false;
//     }
//     for (int i = 0; i <= log2(n); i++) {
//         if ((n & (1 << i)) && (n & ~(1 << i))) {
//             return false;
//         }
//     }
//     return true;
// }

// };


// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if (n <= 0)
//             return false;
//         return ((n & (n - 1)) == 0);
//     }
// };



//babbar

// if (n <= 0)
// {
//     return false;
// }
// else
// {
//     for (i = 0; i <= 30; i++)
//     {
//         result = pow(2, i);
//         if (n == result)
//         {
//             return true;
//         }
//     }
//     return false;
// }