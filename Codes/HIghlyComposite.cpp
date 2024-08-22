/*--------Highly Composite-------*/

/*A num is highly composite if the num of divisors
of num is greater than the num of divisors of all
--------nums less than the given num-----------*/

#include<iostream>
using namespace std;

int numDivisors(int n)
{
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			count += 1;
		}
	}
	return count;
}

int highlyCom(int n)
{
	int result = 1;
	for(int i = 1; i < n; i++)
	{
		if(numDivisors(i) >= numDivisors(n))
			result = 0;
	}
	return result;
}

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	if(highlyCom(n) == 1)
		cout << n << " is a highly composite number. \n";
	else
		cout << n << " is NOT a highly composite number. \n";
	
	return 0;
}
