    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    	float n, i, x, c1 = 0, c2 = 0, c3 = 0, c4 = 0, taxi=0;
    	cin >> n;
    	for (i = 0; i < n; i++)
    	{
    		cin >> x;
    		if (x == 1)
    			c1++;
    		if (x == 2)
    			c2++;
    		if (x == 3)
    			c3++;
    		if (x == 4)
    			c4++;
    	}
    	
    	taxi = c3+c4;
    	if(c1>=c3)
    	{
    		c1 = c1-c3;
    	}
		else
			c1 = 0;
			
    	c2 = c2*2;
    	taxi = taxi + ceil((c1+c2)/4);
     
    	cout<<taxi;
     
    	return 0;
    }