/*---n is prime or not----*/

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

void checkPrime(int n)
{

	if(numFact(n) == 2)
		cout << n << " is a Prime";
	else
		cout << n << " is NOT a Prime";
	
}

int main()
{
	int n;
	cout << "Enter your number:\n";
	cin >> n;

	checkPrime(n);
	return 0;
}
