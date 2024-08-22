/*---num of divisors of n----*/

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

int main()
{
	int n;
	cout << "Enter your number:\n";
	cin >> n;
	
	int nums = numFact(n);	
	cout << "Number of divisors of ";
	cout << n << " is " << nums;

	return 0;
}
