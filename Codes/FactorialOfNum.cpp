/*---Factorial of n----*/

#include<iostream>
using namespace std;

long long fact(int n)
{
	long long factorial = n;
	for(int i = 1; i < n; i++)
		factorial *= i;
	return factorial;
}

int main()
{
	int n;
	cout << "Enter your number:\n";
	cin >> n;
	
	cout << "Factorial of " << n;
	cout << " is" << fact(n);

	return 0;
}
