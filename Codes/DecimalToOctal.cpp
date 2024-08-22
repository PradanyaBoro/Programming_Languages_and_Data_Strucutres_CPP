/*--------Decimal to Octal--------*/

#include<iostream>
using namespace std;

void octal(int n)
{
	/* First we'll find the required dimension
	of our array to store the remainders */
	int size = 0;
	int temp = n;
	while(temp > 0)
	{
		temp /= 8;
		size += 1;
	}
	
	int arr[size];
	int index = 0;
	while(n > 0)
	{
		arr[index] = n % 8;
		n /= 8;
		index++;
	}
	
	for(int j = index - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
}

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	cout << "Octal representation of " << n << " is:\n";
	octal(n);
	
	return 0;
}
