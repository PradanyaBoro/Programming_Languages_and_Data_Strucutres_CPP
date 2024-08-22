/*---num of prime till n----*/

#include<iostream>
using namespace std;

int numFact(int n)
{
	int count = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
			count += 1;
	}
	return count;
}

void numPrimes(int n)
{
	for(int i = 2; i <= n; i++)
	{
		if(numFact(i) <= 2)
			cout << i << " ";
	}
}

int main()
{
	int n;
	cout << "Enter your number:\n";
	cin >> n;
	
	cout << "Prime numbers till " << n;
	cout << " are:\n";
	numPrimes(n);
	return 0;
}
