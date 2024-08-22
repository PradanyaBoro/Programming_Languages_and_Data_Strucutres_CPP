/*---nums relatively prime to n----*/

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
	int gcd = 0;
	int x = min(a, b);
	int y = max(a, b);
	
	if(x == y)
	{
		gcd = x;
	}
	else
	{
		for(int i = 1; i <= x; i++)
		{
			if(x % i == 0 && y % i == 0)
			{
				gcd = i;
			}
		}
	}
	return gcd;
}

void relPrimes(int n)
{
	for(int i = 0; i < n; i++)
	{
		if(GCD(i, n) == 1)
			cout << i << " ";
	}
}

int main()
{
	int n;
	cout << "Enter your number:\n";
	cin >> n;
	
	cout << "Numbers less than " << n << " & relatively prime";
	cout << " to" << n << " are:\n";
	relPrimes(n);
	return 0;
}
