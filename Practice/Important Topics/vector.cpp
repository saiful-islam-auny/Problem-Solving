// #include <bits/stdc++.h>

// using namespace std;

// template <class T>
// void display(vector<T> &v)
// // void display(vector<int> &v)
// {
//   cout<<"Display: ";
//   for (int i = 0; i < v.size(); i++)
//   {
//     cout << v[i] << " ";
//   }
//   cout << "\n";
// }

// int main()
// {
//     // vector<int> vec1;      //zero length integer vector
//     // vector<char> vec2(4);  //4-element character vector
//     //   // vec2.push_back('A');
//     //   // display(vec2);
//     // vector<char> vec3(vec2);//4-element character vector from vec2
//     // vector<int> vec4(5,2); //6-element vector of 3s
//     //   // display(vec4);

//   int n, i, element;
//   vector<int> vec1;

//   cout << "Enter size of vector: ";
//   cin >> n;

//   for (i = 0; i < n; i++)
//   {
//     cin >> element;
//     vec1.push_back(element);
//   }

//   // while (element != 0)
//   // {
//   //   cin >> element;
//   //   vec1.push_back(element);
//   // }
//   // vec1.pop_back();

//   display(vec1);  //before insert

//   vector<int> :: iterator it = vec1.begin();
//   vec1.insert(it + 3, 2, 999);

//   display(vec1);  //after insert

//   return 0;
// }




// swap vectors
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> A (2,5);   // 2 ints with a value of 5
  vector<int> B (5,2);   // 5 ints with a value of 2

  A.swap(B);

  cout << "A contains: ";
  for (unsigned i=0; i<A.size(); i++)
    cout<< A[i] << ' ' ;
  cout << '\n';

  cout << "B contains: ";
  for (unsigned i=0; i<B.size(); i++)
    cout<< B[i] << ' ' ;

  return 0;
}