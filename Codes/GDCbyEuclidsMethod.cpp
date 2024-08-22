/*---------GDC using Euclid's alg---------*/

#include<iostream>
using namespace std;

int euclidGCD(int a, int b)
{
	int gcd;
	
	if(a == 0)
	{
		gcd = b;
	}
	else if(b == 0)
	{
		gcd = a;
	}
	else
	{
		if(a > b)
		{
			gcd = euclidGCD(b, a % b);
		}
		else
		{
			gcd = euclidGCD(a, b % a);
		}
	}
	
	return gcd;
}

int main()
{
	int n;
	int a, b;
	cout << "Enter two numbers: \n";
	cin >> a >> b;
	
	int gcd = euclidGCD(a, b);
	
	cout << "GCD of " << a << " & " << b << " is " << gcd;
	return 0;
}
