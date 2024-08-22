/*Find the number of primes not greater than a given num*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter the number:" << endl;
	cin >> n;
	
	int count = 0;	// Stores count of number of primes not greater than n
	int numDivs = 0;	// Stores number of divisors
	for(int i = 2; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				numDivs++;
			}
		}
		if(numDivs == 2)
		{
			count++;
		}
		numDivs = 0;
	}
	
	cout << "Number of primes not greater than " << n << " is " << count << endl;
	return 0;
}
