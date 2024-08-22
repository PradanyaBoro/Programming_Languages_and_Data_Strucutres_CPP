/*---Sum of first n nums----*/

#include<iostream>
using namespace std;

int sumTill(int n)
{
	int sum = 0;
	for(int i = 1; i <= n; i++)
		sum += i;
	return sum;
}

int main()
{
	int n;
	cout << "Enter your number:\n";
	cin >> n;
	
	cout << "Sum of first " << n;
	cout << " number is " << sumTill(n);

	return 0;
}
