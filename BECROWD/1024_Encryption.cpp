#include <iostream>
#include <bits/stdc++.h>
// #include <cstring>

using namespace std;

int main()
{
	int n, i, j, length;
	string a;
	cin>>n;

	for (i = 0; i <=n; i ++ )
	{
		getline(cin, a);
		if(i==0)
			continue;

		length = a.length();

		for (j = 0; j < length; j++)
		{
			if (a[j] >= 65 && a[j] <= 90 || a[j] >= 97 && a[j] <= 122)
			{
				a[j] = a[j] + 3;
			}
		}
		
		reverse(a.begin(), a.end());

		for(j=(length/2); j<length; j++)
		{
			a[j] = a[j]-1;
		}
		cout << a<<endl;
	}

	return 0;
}