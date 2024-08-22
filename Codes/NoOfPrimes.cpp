#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number:\n";
	cin >> n;

	int count;
	for(int i = 2; i <= n; i++)
	{
		int div = 0;
		for(int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				div++;
			}
		}
		
		if(div <= 2)
		{
			count++;
		}
	}
	
	cout << "Number of primes not greater than " << n << "is " << count;
}
