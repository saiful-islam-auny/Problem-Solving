#include <iostream>
using namespace std;
int fib(int x)
{
   if ((x == 1) || (x == 0))
   {
      return (x);
   }
   else
   {
      return (fib(x - 1) + fib(x - 2));
   }
}
int main()
{
   int x, i = 0, j = 1;

   cin >> x;
   cout << "\nFibonnaci Series : \n";
   while (j <= x)
   {
      cout << j << "\t";
      j++;
   }
   cout << endl;
   while (i < x)
   {
      cout << fib(i) << "\t";
      i++;
   }
   return 0;
}