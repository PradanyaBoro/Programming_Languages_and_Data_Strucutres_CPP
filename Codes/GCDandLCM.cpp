/*-------GCD & LCM of two given nums--------*/

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	int gcd = 0;
	int x = min(a, b);
	int y = max(a, b);
	
	if(x == 0)
	{
		gcd = y;
	}
	else if(y == 0)
	{
		gcd = x;
	}
	else
	{
		for(int i = x; i >= x; i--)
		{
			if(x % i == 0 && y % i == 0)
			{
				gcd = i;
			}
		}
	}
	return gcd;
}

/*
int LCM(int a, int b)
{
	return (a * b)/GCD(a, b);
}
*/

int LCM(int a, int b)
{
	int lcm = 0;
	int x = min(a, b);
	int y = max(a, b);
	
	if(x == y)
		lcm = x;
	else
	{
		int i = y;
		while(i <= x * y)
		{
			if(i % x == 0 && i % y == 0)
			{
				lcm = i;
				break;
			}
			i++;
		}
	}
	return lcm;	
}

int main()
{
	int a, b;
	cout << "Enter your nums: \n";
	cin >> a >> b;
	
	int gcd = GCD(a, b);
	int lcm = LCM(a, b);
	
	cout << "GCD & LCM of " << a << " & " << b << " are " << gcd << " & " << lcm << " respectively";
	
	return 0;
}
